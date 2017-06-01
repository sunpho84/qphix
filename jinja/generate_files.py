#!/usr/bin/env python3
# -*- coding: utf-8 -*-

# Copyright © 2017 Martin Ueding <dev@martin-ueding.de>

import argparse
import getpass
import glob
import itertools
import json
import os
import socket

import jinja2


march = {
    'scalar': 'TODO',
    'avx': 'sandybridge',
    'avx2': 'haswell',
    'avx512': 'knl',
}


def get_kernel_files_for_isa(kernel_pattern, isa, fptypes):
    generated_files = os.listdir(os.path.join('..', 'generated', isa,
                                              'generated'))
    files = []
    for fptype in fptypes:
        prefix = kernel_pattern % {'fptype_underscore': fptype + '_'}
        added = list(filter(lambda x: x.startswith(prefix), generated_files))
        files += added
    return sorted(set(files))


def write_if_changed(filename, content_new):
    if os.path.isfile(filename):
        with open(filename, 'r') as f:
            content_old = f.read()

        if content_old == content_new:
            return

    print('Updating', filename)

    with open(filename, 'w') as f:
        f.write(content_new)


def main():
    options = _parse_args()

    generated_warning = 'This file has been automatically generated. Do not change it manually, rather look for the template in qphix-codegen.'

    with open('isa.js') as f:
        isas = json.load(f)

    with open('kernels.js') as f:
        kernel_patterns = json.load(f)

    all_header_files = [os.path.join('..', x) for x in glob.glob('../include/*.h')]

    # Setting up Jinja
    env = jinja2.Environment(
        loader=jinja2.FileSystemLoader('..')
    )
    complete_specialization = env.get_template('jinja/complete_specialization.h.j2')
    makefile_am = env.get_template('jinja/Makefile.am.j2')
    kernel_generated_h = env.get_template('jinja/kernel_generated.h.j2')

    for kernel_pattern in kernel_patterns:
        kernel = kernel_pattern % {'fptype_underscore': ''}

        rendered = kernel_generated_h.render(
            generated_warning=generated_warning,
            kernel=kernel,
            isas=sorted(isas.keys()),
        )
        filename = '../generated/{}_generated.h'.format(kernel)
        write_if_changed(filename, rendered)
        all_header_files.append(os.path.join('..', os.path.basename(filename)))


    for isa, isa_data in sorted(isas.items()):
        if len(options.isa) > 0 and not isa in options.isa:
            continue

        if not os.path.isdir(os.path.join('..', 'generated', isa)):
            print('Code for ISA `{}` is not generated. Skipping.'.format(isa))
            continue

        source_files = []
        header_files = list(all_header_files)

        os.makedirs(os.path.join('..', 'generated', isa, 'include'), exist_ok=True)
        os.makedirs(os.path.join('..', 'generated', isa, 'src'), exist_ok=True)

        # Generate a `Makefile.am`.
        generated_files = os.listdir(os.path.join('..', 'generated', isa, 'generated'))
        generated_for_prefix = {}
        for kernel_pattern in kernel_patterns:
            prefix = kernel_pattern % {'fptype_underscore': ''}
            generated_for_prefix[prefix] = get_kernel_files_for_isa(kernel_pattern, isa, isa_data['fptypes'].keys())

        rendered = makefile_am.render(
            generated_warning=generated_warning,
            isa=isa,
            extra_includes=[
                os.path.relpath(extra_include, os.path.join('qphix', isa))
                for extra_include in isa_data['extra_includes_local']],
            generated_for_prefix=generated_for_prefix,
        )
        filename = os.path.join('../generated', isa, 'Makefile.am')
        write_if_changed(filename, rendered)

        for kernel_pattern in kernel_patterns:
            kernel = kernel_pattern % {'fptype_underscore': ''}

            filename_decl = os.path.join('..', 'generated', isa, 'include', '{}_{}_decl.h'.format(kernel, isa))
            template_decl = env.get_template('jinja/{}_decl.h.j2'.format(kernel))

            rendered = template_decl.render()
            write_if_changed(filename_decl, rendered)
            header_files.append(os.path.join('include', os.path.basename(filename_decl)))

            for fptype, fptype_data in sorted(isa_data['fptypes'].items()):
                veclen = fptype_data['veclen']
                for soalen in fptype_data['soalens']:
                    print('Working on kernel `{}` for ISA `{}` ...'.format(kernel, isa))
                    for compress12 in ['true', 'false']:
                        template_param = {
                            'FPTYPE': fptype,
                            'VEC': veclen,
                            'SOA': soalen,
                            'COMPRESS12': compress12,
                            'generated_warning': generated_warning,
                            'ISA': isa,
                            'kernel_pattern': kernel_pattern,
                            'extra_includes_local': isa_data['extra_includes_local'] + [os.path.join('include', os.path.basename(filename_decl))],
                            'extra_includes_global': isa_data['extra_includes_global'],
                        }

                        rendered = complete_specialization.render(
                            kernel_base=kernel,
                            **template_param,
                        )
                        filename_spec = os.path.join(
                            '../generated',
                            isa,
                            'src',
                            '{}_{}_spec_{}_{}_{}_{}.cpp'.format(
                                kernel,
                                isa,
                                fptype,
                                veclen,
                                soalen,
                                'compress12' if compress12 == 'true' else 'compress18',
                            )
                        )
                        write_if_changed(filename_spec, rendered)
                        source_files.append(filename_spec)

                        for tbc in itertools.product(*([(True, False)] * 4)):
                            tbc_ts = ''.join(['t' if x else 's' for x in tbc])
                            tbc_true_false = ', '.join(['true' if x else 'false' for x in tbc])

                            # Generate the complete specialization.
                            rendered = complete_specialization.render(
                                tbc_ts=tbc_ts,
                                tbc_true_false=tbc_true_false,
                                kernel_base=kernel + '_tbc',
                                **template_param,
                            )
                            filename_spec = os.path.join(
                                '../generated',
                                isa,
                                'src',
                                '{}_{}_spec_{}_{}_{}_{}_{}.cpp'.format(
                                    kernel,
                                    isa,
                                    fptype,
                                    veclen,
                                    soalen,
                                    'compress12' if compress12 == 'true' else 'compress18',
                                    tbc_ts,
                                )
                            )
                            write_if_changed(filename_spec, rendered)
                            source_files.append(filename_spec)


        cmake_template = env.get_template('jinja/CMakeLists.txt.j2')
        filename_cmake = os.path.join('../generated', isa, 'CMakeLists.txt')
        rendered = cmake_template.render(
            source_files=[
                os.path.basename(source_file)
                for source_file in source_files],
            header_files=header_files,
            march=march[isa],
        )
        write_if_changed(filename_cmake, rendered)


def _parse_args():
    '''
    Parses the command line arguments.

    :return: Namespace with arguments.
    :rtype: Namespace
    '''
    parser = argparse.ArgumentParser(description='')
    parser.add_argument('isa', nargs='+')
    options = parser.parse_args()

    return options


if __name__ == "__main__":
    main()
