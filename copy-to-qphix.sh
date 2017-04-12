#!/bin/bash
# Copyright © 2017 Martin Ueding <dev@martin-ueding.de>

# Generates the code for a given ISA and then copies the generated code to the
# QPhiX repository.

if (( $# != 2 )); then
    cat <<EOF
This program does all the work when generating kernels for QPhiX. 

Call it like this: $0 ISA QPHIX-DIRECTORY

- ISA is something like “avx” or “avx512”.

- DIRECTORY is the base of the directory where the qphix repo is located.
EOF
    exit 1
fi

set -e
set -u
set -x

isa="$1"
qphix="$2"

if ! [[ -d "$qphix/.git" ]]; then
    echo "The QPhiX Git repository could not be found at $qphix. Please make sure it is there or change the variable in this script."
    exit 1
fi

# Generate the kernel code.
make -j "$(nproc)" "$isa"

# Generate the specialization code.
pushd jinja
./generate_files.py "$isa"
popd

# Copy the kernel files to QPhiX.
cp -r "generated/$isa" "$qphix/include/qphix/$isa"

# Copy the specialization files to QPhiX.
cp "generated/"*.h "$qphix/include/qphix/"
