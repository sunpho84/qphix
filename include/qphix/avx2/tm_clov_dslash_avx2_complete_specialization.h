

// This file has been automatically generated. Do not change it manually, rather look for the template in qphix-codegen.





#pragma once

#include "immintrin.h"
#include "qphix/geometry.h"


#include "qphix/avx/avx_utils.h"



#include <immintrin.h>




template <typename FT, int veclen, int soalen, bool compress12>
inline void tm_clov_dslash_plus_vec(
    const typename Geometry<FT, veclen, soalen, compress12>::FourSpinorBlock
        *xyBase,
    const typename Geometry<FT, veclen, soalen, compress12>::FourSpinorBlock
        *zbBase,
    const typename Geometry<FT, veclen, soalen, compress12>::FourSpinorBlock
        *zfBase,
    const typename Geometry<FT, veclen, soalen, compress12>::FourSpinorBlock
        *tbBase,
    const typename Geometry<FT, veclen, soalen, compress12>::FourSpinorBlock
        *tfBase,
    typename Geometry<FT, veclen, soalen, compress12>::FourSpinorBlock *oBase,
    const typename Geometry<FT, veclen, soalen, compress12>::SU3MatrixBlock
        *gBase,
    const typename Geometry<FT, veclen, soalen, compress12>::FullCloverBlock
        *clBase,
    const int xbOffs[veclen],
    const int xfOffs[veclen],
    const int ybOffs[veclen],
    const int yfOffs[veclen],
    const int offs[veclen],
    const int gOffs[veclen],
    const int siprefdist1,
    const int siprefdist2,
    const int siprefdist3,
    const int siprefdist4,
    const int gprefdist,
    const int clprefdist,
    const int pfyOffs[veclen],
    const typename Geometry<FT, veclen, soalen, compress12>::FourSpinorBlock
        *pfBase2,
    const typename Geometry<FT, veclen, soalen, compress12>::FourSpinorBlock
        *pfBase3,
    const typename Geometry<FT, veclen, soalen, compress12>::FourSpinorBlock
        *pfBase4,
    const unsigned int accumulate[8],
    const FT coeff_s,
    const FT coeff_t_f,
    const FT coeff_t_b) {
    // BASE CASE TEMPLATE. Do nothing for now. Define this in
    // clov_dslash_generated_c.h later
    fprintf(stderr, "Generic veclen and soalen not supported yet.\n");
    abort();
}

template <typename FT, int veclen, int soalen, bool compress12>
inline void tm_clov_dslash_minus_vec(
    const typename Geometry<FT, veclen, soalen, compress12>::FourSpinorBlock
        *xyBase,
    const typename Geometry<FT, veclen, soalen, compress12>::FourSpinorBlock
        *zbBase,
    const typename Geometry<FT, veclen, soalen, compress12>::FourSpinorBlock
        *zfBase,
    const typename Geometry<FT, veclen, soalen, compress12>::FourSpinorBlock
        *tbBase,
    const typename Geometry<FT, veclen, soalen, compress12>::FourSpinorBlock
        *tfBase,
    typename Geometry<FT, veclen, soalen, compress12>::FourSpinorBlock *oBase,
    const typename Geometry<FT, veclen, soalen, compress12>::SU3MatrixBlock
        *gBase,
    const typename Geometry<FT, veclen, soalen, compress12>::FullCloverBlock
        *clBase,
    const int xbOffs[veclen],
    const int xfOffs[veclen],
    const int ybOffs[veclen],
    const int yfOffs[veclen],
    const int offs[veclen],
    const int gOffs[veclen],
    const int siprefdist1,
    const int siprefdist2,
    const int siprefdist3,
    const int siprefdist4,
    const int gprefdist,
    const int clprefdist,
    const int pfyOffs[veclen],
    const typename Geometry<FT, veclen, soalen, compress12>::FourSpinorBlock
        *pfBase2,
    const typename Geometry<FT, veclen, soalen, compress12>::FourSpinorBlock
        *pfBase3,
    const typename Geometry<FT, veclen, soalen, compress12>::FourSpinorBlock
        *pfBase4,
    const unsigned int accumulate[8],
    const FT coeff_s,
    const FT coeff_t_f,
    const FT coeff_t_b) {
    // BASE CASE TEMPLATE. Do nothing for now. Define this in
    // clov_dslash_generated_c.h later
    fprintf(stderr, "Generic veclen and soalen not supported yet.\n");
    abort();
}

template <typename FT, int veclen, int soalen, bool compress12>
inline void tm_clov_dslash_achimbdpsi_plus_vec(
    const typename Geometry<FT, veclen, soalen, compress12>::FourSpinorBlock
        *xyBase,
    const typename Geometry<FT, veclen, soalen, compress12>::FourSpinorBlock
        *zbBase,
    const typename Geometry<FT, veclen, soalen, compress12>::FourSpinorBlock
        *zfBase,
    const typename Geometry<FT, veclen, soalen, compress12>::FourSpinorBlock
        *tbBase,
    const typename Geometry<FT, veclen, soalen, compress12>::FourSpinorBlock
        *tfBase,
    const typename Geometry<FT, veclen, soalen, compress12>::FourSpinorBlock
        *chiBase,
    typename Geometry<FT, veclen, soalen, compress12>::FourSpinorBlock *oBase,
    const typename Geometry<FT, veclen, soalen, compress12>::SU3MatrixBlock
        *gBase,
    const typename Geometry<FT, veclen, soalen, compress12>::FullCloverBlock
        *clBase,
    const int xbOffs[veclen],
    const int xfOffs[veclen],
    const int ybOffs[veclen],
    const int yfOffs[veclen],
    const int offs[veclen],
    const int gOffs[veclen],
    const int siprefdist1,
    const int siprefdist2,
    const int siprefdist3,
    const int siprefdist4,
    const int chiprefdist,
    const int gprefdist,
    const int clprefdist,
    const int pfyOffs[veclen],
    const typename Geometry<FT, veclen, soalen, compress12>::FourSpinorBlock
        *pfBase2,
    const typename Geometry<FT, veclen, soalen, compress12>::FourSpinorBlock
        *pfBase3,
    const typename Geometry<FT, veclen, soalen, compress12>::FourSpinorBlock
        *pfBase4,
    const typename Geometry<FT, veclen, soalen, compress12>::FourSpinorBlock
        *pfBaseChi,
    const FT coeff_s,
    const FT coeff_t_f,
    const FT coeff_t_b,
    const unsigned int accumulate[8]) {
    // BASE CASE TEMPLATE. Do nothing for now. Define this in
    // clov_dslash_generated_c.h later
    fprintf(stderr, "Generic veclen and soalen not supported yet.\n");
    abort();
}

template <typename FT, int veclen, int soalen, bool compress12>
inline void tm_clov_dslash_achimbdpsi_minus_vec(
    const typename Geometry<FT, veclen, soalen, compress12>::FourSpinorBlock
        *xyBase,
    const typename Geometry<FT, veclen, soalen, compress12>::FourSpinorBlock
        *zbBase,
    const typename Geometry<FT, veclen, soalen, compress12>::FourSpinorBlock
        *zfBase,
    const typename Geometry<FT, veclen, soalen, compress12>::FourSpinorBlock
        *tbBase,
    const typename Geometry<FT, veclen, soalen, compress12>::FourSpinorBlock
        *tfBase,
    const typename Geometry<FT, veclen, soalen, compress12>::FourSpinorBlock
        *chiBase,
    typename Geometry<FT, veclen, soalen, compress12>::FourSpinorBlock *oBase,
    const typename Geometry<FT, veclen, soalen, compress12>::SU3MatrixBlock
        *gBase,
    const typename Geometry<FT, veclen, soalen, compress12>::FullCloverBlock
        *clBase,
    const int xbOffs[veclen],
    const int xfOffs[veclen],
    const int ybOffs[veclen],
    const int yfOffs[veclen],
    const int offs[veclen],
    const int gOffs[veclen],
    const int siprefdist1,
    const int siprefdist2,
    const int siprefdist3,
    const int siprefdist4,
    const int chiprefdist,
    const int gprefdist,
    const int clprefdist,
    const int pfyOffs[veclen],
    const typename Geometry<FT, veclen, soalen, compress12>::FourSpinorBlock
        *pfBase2,
    const typename Geometry<FT, veclen, soalen, compress12>::FourSpinorBlock
        *pfBase3,
    const typename Geometry<FT, veclen, soalen, compress12>::FourSpinorBlock
        *pfBase4,
    const typename Geometry<FT, veclen, soalen, compress12>::FourSpinorBlock
        *pfBaseChi,
    const FT coeff_s,
    const FT coeff_t_f,
    const FT coeff_t_b,
    const unsigned int accumulate[8]) {
    // BASE CASE TEMPLATE. Do nothing for now. Define this in
    // clov_dslash_generated_c.h later
    fprintf(stderr, "Generic veclen and soalen not supported yet.\n");
    abort();
}

#ifdef QPHIX_DO_COMMS

template <typename FT, int veclen, int soalen, bool compress12>
inline void tm_clov_face_finish_dir_plus(
    const FT *inbuf,
    const typename Geometry<FT, veclen, soalen, compress12>::SU3MatrixBlock
        *gBase,
    typename Geometry<FT, veclen, soalen, compress12>::FourSpinorBlock *oBase,
    const typename Geometry<FT, veclen, soalen, compress12>::FullCloverBlock
        *clBase,
    const int gOffs[veclen],
    const int offs[veclen],
    const int hsprefdist,
    const int gprefdist,
    const int soprefdist,
    const int clprefdist,
    const FT beta,
    unsigned int mask,
    int dir) {
    // BASE CASE TEMPLATE. Do nothing for now. Define this in
    // dslash_generated_c.h later
    fprintf(stderr, "Generic veclen and soalen not supported yet.\n");
    abort();
}

template <typename FT, int veclen, int soalen, bool compress12>
inline void tm_clov_face_finish_dir_minus(
    const FT *inbuf,
    const typename Geometry<FT, veclen, soalen, compress12>::SU3MatrixBlock
        *gBase,
    typename Geometry<FT, veclen, soalen, compress12>::FourSpinorBlock *oBase,
    const typename Geometry<FT, veclen, soalen, compress12>::FullCloverBlock
        *clBase,
    const int gOffs[veclen],
    const int offs[veclen],
    const int hsprefdist,
    const int gprefdist,
    const int soprefdist,
    const int clprefdist,
    const FT beta,
    unsigned int mask,
    int dir) {
    // BASE CASE TEMPLATE. Do nothing for now. Define this in
    // dslash_generated_c.h later
    fprintf(stderr, "Generic veclen and soalen not supported yet.\n");
    abort();
}

#endif // QPHIX_DO_COMMS





#define FPTYPE double
#define VEC 4
#define SOA 2
#define COMPRESS12 true
template <>
inline void tm_clov_dslash_plus_vec<FPTYPE, VEC, SOA, COMPRESS12>(
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *xyBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *zbBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *zfBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *tbBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *tfBase,
    Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *oBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::SU3MatrixBlock *gBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FullCloverBlock *clBase,
    const int xbOffs[VEC],
    const int xfOffs[VEC],
    const int ybOffs[VEC],
    const int yfOffs[VEC],
    const int offs[VEC],
    const int gOffs[VEC],
    const int siprefdist1,
    const int siprefdist2,
    const int siprefdist3,
    const int siprefdist4,
    const int gprefdist,
    const int clprefdist,
    const int pfyOffs[VEC],
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase2,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase3,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase4,
    const unsigned int accumulate[8],
    const FPTYPE coeff_s,
    const FPTYPE coeff_t_f,
    const FPTYPE coeff_t_b) {
    // clang-format off
    






#include "qphix/avx2/generated/tm_clov_double_dslash_plus_body_double_double_v4_s2_12"

    // clang-format on
}

template <>
inline void tm_clov_dslash_minus_vec<FPTYPE, VEC, SOA, COMPRESS12>(
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *xyBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *zbBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *zfBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *tbBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *tfBase,
    Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *oBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::SU3MatrixBlock *gBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FullCloverBlock *clBase,
    const int xbOffs[VEC],
    const int xfOffs[VEC],
    const int ybOffs[VEC],
    const int yfOffs[VEC],
    const int offs[VEC],
    const int gOffs[VEC],
    const int siprefdist1,
    const int siprefdist2,
    const int siprefdist3,
    const int siprefdist4,
    const int gprefdist,
    const int clprefdist,
    const int pfyOffs[VEC],
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase2,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase3,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase4,
    const unsigned int accumulate[8],
    const FPTYPE coeff_s,
    const FPTYPE coeff_t_f,
    const FPTYPE coeff_t_b) {
    // clang-format off
    






#include "qphix/avx2/generated/tm_clov_double_dslash_minus_body_double_double_v4_s2_12"

    // clang-format on
}

template <>
inline void tm_clov_dslash_achimbdpsi_plus_vec<FPTYPE, VEC, SOA, COMPRESS12>(
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *xyBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *zbBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *zfBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *tbBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *tfBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *chiBase,
    Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *oBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::SU3MatrixBlock *gBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FullCloverBlock *clBase,
    const int xbOffs[VEC],
    const int xfOffs[VEC],
    const int ybOffs[VEC],
    const int yfOffs[VEC],
    const int offs[VEC],
    const int gOffs[VEC],
    const int siprefdist1,
    const int siprefdist2,
    const int siprefdist3,
    const int siprefdist4,
    const int chiprefdist,
    const int gprefdist,
    const int clprefdist,
    const int pfyOffs[VEC],
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase2,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase3,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase4,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBaseChi,
    const FPTYPE coeff_s,
    const FPTYPE coeff_t_f,
    const FPTYPE coeff_t_b,
    const unsigned int accumulate[8]) {
    // clang-format off
    






#include "qphix/avx2/generated/tm_clov_double_dslash_achimbdpsi_plus_body_double_double_v4_s2_12"

    // clang-format on
}

template <>
inline void tm_clov_dslash_achimbdpsi_minus_vec<FPTYPE, VEC, SOA, COMPRESS12>(
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *xyBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *zbBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *zfBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *tbBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *tfBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *chiBase,
    Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *oBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::SU3MatrixBlock *gBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FullCloverBlock *clBase,
    const int xbOffs[VEC],
    const int xfOffs[VEC],
    const int ybOffs[VEC],
    const int yfOffs[VEC],
    const int offs[VEC],
    const int gOffs[VEC],
    const int siprefdist1,
    const int siprefdist2,
    const int siprefdist3,
    const int siprefdist4,
    const int chiprefdist,
    const int gprefdist,
    const int clprefdist,
    const int pfyOffs[VEC],
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase2,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase3,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase4,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBaseChi,
    const FPTYPE coeff_s,
    const FPTYPE coeff_t_f,
    const FPTYPE coeff_t_b,
    const unsigned int accumulate[8]) {
    // clang-format off
    






#include "qphix/avx2/generated/tm_clov_double_dslash_achimbdpsi_minus_body_double_double_v4_s2_12"

    // clang-format on
}

#ifdef QPHIX_DO_COMMS

template <>
inline void tm_clov_face_finish_dir_plus<FPTYPE, VEC, SOA, COMPRESS12>(
    const FPTYPE *inbuf,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::SU3MatrixBlock *gBase,
    Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *oBase,
    const typename Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FullCloverBlock
        *clBase,
    const int gOffs[VEC],
    const int offs[VEC],
    const int hsprefdist,
    const int gprefdist,
    const int soprefdist,
    const int clprefdist,
    const FPTYPE beta,
    unsigned int mask,
    int dir) {
    if (dir == 0) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_double_dslash_face_unpack_from_back_X_plus_double_double_v4_s2_12"

        // clang-format on
    } else if (dir == 1) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_double_dslash_face_unpack_from_forw_X_plus_double_double_v4_s2_12"

        // clang-format on
    } else if (dir == 2) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_double_dslash_face_unpack_from_back_Y_plus_double_double_v4_s2_12"

        // clang-format on
    } else if (dir == 3) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_double_dslash_face_unpack_from_forw_Y_plus_double_double_v4_s2_12"

        // clang-format on
    } else if (dir == 4) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_double_dslash_face_unpack_from_back_Z_plus_double_double_v4_s2_12"

        // clang-format on
    } else if (dir == 5) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_double_dslash_face_unpack_from_forw_Z_plus_double_double_v4_s2_12"

        // clang-format on
    } else if (dir == 6) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_double_dslash_face_unpack_from_back_T_plus_double_double_v4_s2_12"

        // clang-format on
    } else if (dir == 7) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_double_dslash_face_unpack_from_forw_T_plus_double_double_v4_s2_12"

        // clang-format on
    } else {
        printf("Invalid dir for unpack boundary\n");
        exit(1);
    }
}

template <>
inline void tm_clov_face_finish_dir_minus<FPTYPE, VEC, SOA, COMPRESS12>(
    const FPTYPE *inbuf,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::SU3MatrixBlock *gBase,
    Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *oBase,
    const typename Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FullCloverBlock
        *clBase,
    const int gOffs[VEC],
    const int offs[VEC],
    const int hsprefdist,
    const int gprefdist,
    const int soprefdist,
    const int clprefdist,
    const FPTYPE beta,
    unsigned int mask,
    int dir) {
    if (dir == 0) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_double_dslash_face_unpack_from_back_X_minus_double_double_v4_s2_12"

        // clang-format on
    } else if (dir == 1) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_double_dslash_face_unpack_from_forw_X_minus_double_double_v4_s2_12"

        // clang-format on
    } else if (dir == 2) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_double_dslash_face_unpack_from_back_Y_minus_double_double_v4_s2_12"

        // clang-format on
    } else if (dir == 3) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_double_dslash_face_unpack_from_forw_Y_minus_double_double_v4_s2_12"

        // clang-format on
    } else if (dir == 4) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_double_dslash_face_unpack_from_back_Z_minus_double_double_v4_s2_12"

        // clang-format on
    } else if (dir == 5) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_double_dslash_face_unpack_from_forw_Z_minus_double_double_v4_s2_12"

        // clang-format on
    } else if (dir == 6) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_double_dslash_face_unpack_from_back_T_minus_double_double_v4_s2_12"

        // clang-format on
    } else if (dir == 7) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_double_dslash_face_unpack_from_forw_T_minus_double_double_v4_s2_12"

        // clang-format on
    } else {
        printf("Invalid dir for unpack boundary\n");
        exit(1);
    }
}

#endif // QPHIX_DO_COMMS
#undef FPTYPE
#undef VEC
#undef SOA
#undef COMPRESS12

#define FPTYPE double
#define VEC 4
#define SOA 2
#define COMPRESS12 false
template <>
inline void tm_clov_dslash_plus_vec<FPTYPE, VEC, SOA, COMPRESS12>(
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *xyBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *zbBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *zfBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *tbBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *tfBase,
    Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *oBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::SU3MatrixBlock *gBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FullCloverBlock *clBase,
    const int xbOffs[VEC],
    const int xfOffs[VEC],
    const int ybOffs[VEC],
    const int yfOffs[VEC],
    const int offs[VEC],
    const int gOffs[VEC],
    const int siprefdist1,
    const int siprefdist2,
    const int siprefdist3,
    const int siprefdist4,
    const int gprefdist,
    const int clprefdist,
    const int pfyOffs[VEC],
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase2,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase3,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase4,
    const unsigned int accumulate[8],
    const FPTYPE coeff_s,
    const FPTYPE coeff_t_f,
    const FPTYPE coeff_t_b) {
    // clang-format off
    






#include "qphix/avx2/generated/tm_clov_double_dslash_plus_body_double_double_v4_s2_18"

    // clang-format on
}

template <>
inline void tm_clov_dslash_minus_vec<FPTYPE, VEC, SOA, COMPRESS12>(
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *xyBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *zbBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *zfBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *tbBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *tfBase,
    Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *oBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::SU3MatrixBlock *gBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FullCloverBlock *clBase,
    const int xbOffs[VEC],
    const int xfOffs[VEC],
    const int ybOffs[VEC],
    const int yfOffs[VEC],
    const int offs[VEC],
    const int gOffs[VEC],
    const int siprefdist1,
    const int siprefdist2,
    const int siprefdist3,
    const int siprefdist4,
    const int gprefdist,
    const int clprefdist,
    const int pfyOffs[VEC],
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase2,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase3,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase4,
    const unsigned int accumulate[8],
    const FPTYPE coeff_s,
    const FPTYPE coeff_t_f,
    const FPTYPE coeff_t_b) {
    // clang-format off
    






#include "qphix/avx2/generated/tm_clov_double_dslash_minus_body_double_double_v4_s2_18"

    // clang-format on
}

template <>
inline void tm_clov_dslash_achimbdpsi_plus_vec<FPTYPE, VEC, SOA, COMPRESS12>(
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *xyBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *zbBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *zfBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *tbBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *tfBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *chiBase,
    Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *oBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::SU3MatrixBlock *gBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FullCloverBlock *clBase,
    const int xbOffs[VEC],
    const int xfOffs[VEC],
    const int ybOffs[VEC],
    const int yfOffs[VEC],
    const int offs[VEC],
    const int gOffs[VEC],
    const int siprefdist1,
    const int siprefdist2,
    const int siprefdist3,
    const int siprefdist4,
    const int chiprefdist,
    const int gprefdist,
    const int clprefdist,
    const int pfyOffs[VEC],
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase2,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase3,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase4,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBaseChi,
    const FPTYPE coeff_s,
    const FPTYPE coeff_t_f,
    const FPTYPE coeff_t_b,
    const unsigned int accumulate[8]) {
    // clang-format off
    






#include "qphix/avx2/generated/tm_clov_double_dslash_achimbdpsi_plus_body_double_double_v4_s2_18"

    // clang-format on
}

template <>
inline void tm_clov_dslash_achimbdpsi_minus_vec<FPTYPE, VEC, SOA, COMPRESS12>(
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *xyBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *zbBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *zfBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *tbBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *tfBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *chiBase,
    Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *oBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::SU3MatrixBlock *gBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FullCloverBlock *clBase,
    const int xbOffs[VEC],
    const int xfOffs[VEC],
    const int ybOffs[VEC],
    const int yfOffs[VEC],
    const int offs[VEC],
    const int gOffs[VEC],
    const int siprefdist1,
    const int siprefdist2,
    const int siprefdist3,
    const int siprefdist4,
    const int chiprefdist,
    const int gprefdist,
    const int clprefdist,
    const int pfyOffs[VEC],
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase2,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase3,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase4,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBaseChi,
    const FPTYPE coeff_s,
    const FPTYPE coeff_t_f,
    const FPTYPE coeff_t_b,
    const unsigned int accumulate[8]) {
    // clang-format off
    






#include "qphix/avx2/generated/tm_clov_double_dslash_achimbdpsi_minus_body_double_double_v4_s2_18"

    // clang-format on
}

#ifdef QPHIX_DO_COMMS

template <>
inline void tm_clov_face_finish_dir_plus<FPTYPE, VEC, SOA, COMPRESS12>(
    const FPTYPE *inbuf,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::SU3MatrixBlock *gBase,
    Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *oBase,
    const typename Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FullCloverBlock
        *clBase,
    const int gOffs[VEC],
    const int offs[VEC],
    const int hsprefdist,
    const int gprefdist,
    const int soprefdist,
    const int clprefdist,
    const FPTYPE beta,
    unsigned int mask,
    int dir) {
    if (dir == 0) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_double_dslash_face_unpack_from_back_X_plus_double_double_v4_s2_18"

        // clang-format on
    } else if (dir == 1) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_double_dslash_face_unpack_from_forw_X_plus_double_double_v4_s2_18"

        // clang-format on
    } else if (dir == 2) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_double_dslash_face_unpack_from_back_Y_plus_double_double_v4_s2_18"

        // clang-format on
    } else if (dir == 3) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_double_dslash_face_unpack_from_forw_Y_plus_double_double_v4_s2_18"

        // clang-format on
    } else if (dir == 4) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_double_dslash_face_unpack_from_back_Z_plus_double_double_v4_s2_18"

        // clang-format on
    } else if (dir == 5) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_double_dslash_face_unpack_from_forw_Z_plus_double_double_v4_s2_18"

        // clang-format on
    } else if (dir == 6) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_double_dslash_face_unpack_from_back_T_plus_double_double_v4_s2_18"

        // clang-format on
    } else if (dir == 7) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_double_dslash_face_unpack_from_forw_T_plus_double_double_v4_s2_18"

        // clang-format on
    } else {
        printf("Invalid dir for unpack boundary\n");
        exit(1);
    }
}

template <>
inline void tm_clov_face_finish_dir_minus<FPTYPE, VEC, SOA, COMPRESS12>(
    const FPTYPE *inbuf,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::SU3MatrixBlock *gBase,
    Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *oBase,
    const typename Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FullCloverBlock
        *clBase,
    const int gOffs[VEC],
    const int offs[VEC],
    const int hsprefdist,
    const int gprefdist,
    const int soprefdist,
    const int clprefdist,
    const FPTYPE beta,
    unsigned int mask,
    int dir) {
    if (dir == 0) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_double_dslash_face_unpack_from_back_X_minus_double_double_v4_s2_18"

        // clang-format on
    } else if (dir == 1) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_double_dslash_face_unpack_from_forw_X_minus_double_double_v4_s2_18"

        // clang-format on
    } else if (dir == 2) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_double_dslash_face_unpack_from_back_Y_minus_double_double_v4_s2_18"

        // clang-format on
    } else if (dir == 3) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_double_dslash_face_unpack_from_forw_Y_minus_double_double_v4_s2_18"

        // clang-format on
    } else if (dir == 4) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_double_dslash_face_unpack_from_back_Z_minus_double_double_v4_s2_18"

        // clang-format on
    } else if (dir == 5) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_double_dslash_face_unpack_from_forw_Z_minus_double_double_v4_s2_18"

        // clang-format on
    } else if (dir == 6) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_double_dslash_face_unpack_from_back_T_minus_double_double_v4_s2_18"

        // clang-format on
    } else if (dir == 7) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_double_dslash_face_unpack_from_forw_T_minus_double_double_v4_s2_18"

        // clang-format on
    } else {
        printf("Invalid dir for unpack boundary\n");
        exit(1);
    }
}

#endif // QPHIX_DO_COMMS
#undef FPTYPE
#undef VEC
#undef SOA
#undef COMPRESS12



#define FPTYPE double
#define VEC 4
#define SOA 4
#define COMPRESS12 true
template <>
inline void tm_clov_dslash_plus_vec<FPTYPE, VEC, SOA, COMPRESS12>(
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *xyBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *zbBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *zfBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *tbBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *tfBase,
    Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *oBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::SU3MatrixBlock *gBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FullCloverBlock *clBase,
    const int xbOffs[VEC],
    const int xfOffs[VEC],
    const int ybOffs[VEC],
    const int yfOffs[VEC],
    const int offs[VEC],
    const int gOffs[VEC],
    const int siprefdist1,
    const int siprefdist2,
    const int siprefdist3,
    const int siprefdist4,
    const int gprefdist,
    const int clprefdist,
    const int pfyOffs[VEC],
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase2,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase3,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase4,
    const unsigned int accumulate[8],
    const FPTYPE coeff_s,
    const FPTYPE coeff_t_f,
    const FPTYPE coeff_t_b) {
    // clang-format off
    






#include "qphix/avx2/generated/tm_clov_double_dslash_plus_body_double_double_v4_s4_12"

    // clang-format on
}

template <>
inline void tm_clov_dslash_minus_vec<FPTYPE, VEC, SOA, COMPRESS12>(
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *xyBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *zbBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *zfBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *tbBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *tfBase,
    Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *oBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::SU3MatrixBlock *gBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FullCloverBlock *clBase,
    const int xbOffs[VEC],
    const int xfOffs[VEC],
    const int ybOffs[VEC],
    const int yfOffs[VEC],
    const int offs[VEC],
    const int gOffs[VEC],
    const int siprefdist1,
    const int siprefdist2,
    const int siprefdist3,
    const int siprefdist4,
    const int gprefdist,
    const int clprefdist,
    const int pfyOffs[VEC],
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase2,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase3,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase4,
    const unsigned int accumulate[8],
    const FPTYPE coeff_s,
    const FPTYPE coeff_t_f,
    const FPTYPE coeff_t_b) {
    // clang-format off
    






#include "qphix/avx2/generated/tm_clov_double_dslash_minus_body_double_double_v4_s4_12"

    // clang-format on
}

template <>
inline void tm_clov_dslash_achimbdpsi_plus_vec<FPTYPE, VEC, SOA, COMPRESS12>(
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *xyBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *zbBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *zfBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *tbBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *tfBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *chiBase,
    Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *oBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::SU3MatrixBlock *gBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FullCloverBlock *clBase,
    const int xbOffs[VEC],
    const int xfOffs[VEC],
    const int ybOffs[VEC],
    const int yfOffs[VEC],
    const int offs[VEC],
    const int gOffs[VEC],
    const int siprefdist1,
    const int siprefdist2,
    const int siprefdist3,
    const int siprefdist4,
    const int chiprefdist,
    const int gprefdist,
    const int clprefdist,
    const int pfyOffs[VEC],
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase2,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase3,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase4,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBaseChi,
    const FPTYPE coeff_s,
    const FPTYPE coeff_t_f,
    const FPTYPE coeff_t_b,
    const unsigned int accumulate[8]) {
    // clang-format off
    






#include "qphix/avx2/generated/tm_clov_double_dslash_achimbdpsi_plus_body_double_double_v4_s4_12"

    // clang-format on
}

template <>
inline void tm_clov_dslash_achimbdpsi_minus_vec<FPTYPE, VEC, SOA, COMPRESS12>(
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *xyBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *zbBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *zfBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *tbBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *tfBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *chiBase,
    Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *oBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::SU3MatrixBlock *gBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FullCloverBlock *clBase,
    const int xbOffs[VEC],
    const int xfOffs[VEC],
    const int ybOffs[VEC],
    const int yfOffs[VEC],
    const int offs[VEC],
    const int gOffs[VEC],
    const int siprefdist1,
    const int siprefdist2,
    const int siprefdist3,
    const int siprefdist4,
    const int chiprefdist,
    const int gprefdist,
    const int clprefdist,
    const int pfyOffs[VEC],
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase2,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase3,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase4,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBaseChi,
    const FPTYPE coeff_s,
    const FPTYPE coeff_t_f,
    const FPTYPE coeff_t_b,
    const unsigned int accumulate[8]) {
    // clang-format off
    






#include "qphix/avx2/generated/tm_clov_double_dslash_achimbdpsi_minus_body_double_double_v4_s4_12"

    // clang-format on
}

#ifdef QPHIX_DO_COMMS

template <>
inline void tm_clov_face_finish_dir_plus<FPTYPE, VEC, SOA, COMPRESS12>(
    const FPTYPE *inbuf,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::SU3MatrixBlock *gBase,
    Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *oBase,
    const typename Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FullCloverBlock
        *clBase,
    const int gOffs[VEC],
    const int offs[VEC],
    const int hsprefdist,
    const int gprefdist,
    const int soprefdist,
    const int clprefdist,
    const FPTYPE beta,
    unsigned int mask,
    int dir) {
    if (dir == 0) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_double_dslash_face_unpack_from_back_X_plus_double_double_v4_s4_12"

        // clang-format on
    } else if (dir == 1) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_double_dslash_face_unpack_from_forw_X_plus_double_double_v4_s4_12"

        // clang-format on
    } else if (dir == 2) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_double_dslash_face_unpack_from_back_Y_plus_double_double_v4_s4_12"

        // clang-format on
    } else if (dir == 3) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_double_dslash_face_unpack_from_forw_Y_plus_double_double_v4_s4_12"

        // clang-format on
    } else if (dir == 4) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_double_dslash_face_unpack_from_back_Z_plus_double_double_v4_s4_12"

        // clang-format on
    } else if (dir == 5) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_double_dslash_face_unpack_from_forw_Z_plus_double_double_v4_s4_12"

        // clang-format on
    } else if (dir == 6) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_double_dslash_face_unpack_from_back_T_plus_double_double_v4_s4_12"

        // clang-format on
    } else if (dir == 7) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_double_dslash_face_unpack_from_forw_T_plus_double_double_v4_s4_12"

        // clang-format on
    } else {
        printf("Invalid dir for unpack boundary\n");
        exit(1);
    }
}

template <>
inline void tm_clov_face_finish_dir_minus<FPTYPE, VEC, SOA, COMPRESS12>(
    const FPTYPE *inbuf,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::SU3MatrixBlock *gBase,
    Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *oBase,
    const typename Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FullCloverBlock
        *clBase,
    const int gOffs[VEC],
    const int offs[VEC],
    const int hsprefdist,
    const int gprefdist,
    const int soprefdist,
    const int clprefdist,
    const FPTYPE beta,
    unsigned int mask,
    int dir) {
    if (dir == 0) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_double_dslash_face_unpack_from_back_X_minus_double_double_v4_s4_12"

        // clang-format on
    } else if (dir == 1) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_double_dslash_face_unpack_from_forw_X_minus_double_double_v4_s4_12"

        // clang-format on
    } else if (dir == 2) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_double_dslash_face_unpack_from_back_Y_minus_double_double_v4_s4_12"

        // clang-format on
    } else if (dir == 3) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_double_dslash_face_unpack_from_forw_Y_minus_double_double_v4_s4_12"

        // clang-format on
    } else if (dir == 4) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_double_dslash_face_unpack_from_back_Z_minus_double_double_v4_s4_12"

        // clang-format on
    } else if (dir == 5) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_double_dslash_face_unpack_from_forw_Z_minus_double_double_v4_s4_12"

        // clang-format on
    } else if (dir == 6) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_double_dslash_face_unpack_from_back_T_minus_double_double_v4_s4_12"

        // clang-format on
    } else if (dir == 7) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_double_dslash_face_unpack_from_forw_T_minus_double_double_v4_s4_12"

        // clang-format on
    } else {
        printf("Invalid dir for unpack boundary\n");
        exit(1);
    }
}

#endif // QPHIX_DO_COMMS
#undef FPTYPE
#undef VEC
#undef SOA
#undef COMPRESS12

#define FPTYPE double
#define VEC 4
#define SOA 4
#define COMPRESS12 false
template <>
inline void tm_clov_dslash_plus_vec<FPTYPE, VEC, SOA, COMPRESS12>(
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *xyBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *zbBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *zfBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *tbBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *tfBase,
    Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *oBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::SU3MatrixBlock *gBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FullCloverBlock *clBase,
    const int xbOffs[VEC],
    const int xfOffs[VEC],
    const int ybOffs[VEC],
    const int yfOffs[VEC],
    const int offs[VEC],
    const int gOffs[VEC],
    const int siprefdist1,
    const int siprefdist2,
    const int siprefdist3,
    const int siprefdist4,
    const int gprefdist,
    const int clprefdist,
    const int pfyOffs[VEC],
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase2,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase3,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase4,
    const unsigned int accumulate[8],
    const FPTYPE coeff_s,
    const FPTYPE coeff_t_f,
    const FPTYPE coeff_t_b) {
    // clang-format off
    






#include "qphix/avx2/generated/tm_clov_double_dslash_plus_body_double_double_v4_s4_18"

    // clang-format on
}

template <>
inline void tm_clov_dslash_minus_vec<FPTYPE, VEC, SOA, COMPRESS12>(
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *xyBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *zbBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *zfBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *tbBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *tfBase,
    Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *oBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::SU3MatrixBlock *gBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FullCloverBlock *clBase,
    const int xbOffs[VEC],
    const int xfOffs[VEC],
    const int ybOffs[VEC],
    const int yfOffs[VEC],
    const int offs[VEC],
    const int gOffs[VEC],
    const int siprefdist1,
    const int siprefdist2,
    const int siprefdist3,
    const int siprefdist4,
    const int gprefdist,
    const int clprefdist,
    const int pfyOffs[VEC],
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase2,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase3,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase4,
    const unsigned int accumulate[8],
    const FPTYPE coeff_s,
    const FPTYPE coeff_t_f,
    const FPTYPE coeff_t_b) {
    // clang-format off
    






#include "qphix/avx2/generated/tm_clov_double_dslash_minus_body_double_double_v4_s4_18"

    // clang-format on
}

template <>
inline void tm_clov_dslash_achimbdpsi_plus_vec<FPTYPE, VEC, SOA, COMPRESS12>(
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *xyBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *zbBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *zfBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *tbBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *tfBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *chiBase,
    Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *oBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::SU3MatrixBlock *gBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FullCloverBlock *clBase,
    const int xbOffs[VEC],
    const int xfOffs[VEC],
    const int ybOffs[VEC],
    const int yfOffs[VEC],
    const int offs[VEC],
    const int gOffs[VEC],
    const int siprefdist1,
    const int siprefdist2,
    const int siprefdist3,
    const int siprefdist4,
    const int chiprefdist,
    const int gprefdist,
    const int clprefdist,
    const int pfyOffs[VEC],
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase2,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase3,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase4,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBaseChi,
    const FPTYPE coeff_s,
    const FPTYPE coeff_t_f,
    const FPTYPE coeff_t_b,
    const unsigned int accumulate[8]) {
    // clang-format off
    






#include "qphix/avx2/generated/tm_clov_double_dslash_achimbdpsi_plus_body_double_double_v4_s4_18"

    // clang-format on
}

template <>
inline void tm_clov_dslash_achimbdpsi_minus_vec<FPTYPE, VEC, SOA, COMPRESS12>(
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *xyBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *zbBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *zfBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *tbBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *tfBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *chiBase,
    Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *oBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::SU3MatrixBlock *gBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FullCloverBlock *clBase,
    const int xbOffs[VEC],
    const int xfOffs[VEC],
    const int ybOffs[VEC],
    const int yfOffs[VEC],
    const int offs[VEC],
    const int gOffs[VEC],
    const int siprefdist1,
    const int siprefdist2,
    const int siprefdist3,
    const int siprefdist4,
    const int chiprefdist,
    const int gprefdist,
    const int clprefdist,
    const int pfyOffs[VEC],
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase2,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase3,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase4,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBaseChi,
    const FPTYPE coeff_s,
    const FPTYPE coeff_t_f,
    const FPTYPE coeff_t_b,
    const unsigned int accumulate[8]) {
    // clang-format off
    






#include "qphix/avx2/generated/tm_clov_double_dslash_achimbdpsi_minus_body_double_double_v4_s4_18"

    // clang-format on
}

#ifdef QPHIX_DO_COMMS

template <>
inline void tm_clov_face_finish_dir_plus<FPTYPE, VEC, SOA, COMPRESS12>(
    const FPTYPE *inbuf,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::SU3MatrixBlock *gBase,
    Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *oBase,
    const typename Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FullCloverBlock
        *clBase,
    const int gOffs[VEC],
    const int offs[VEC],
    const int hsprefdist,
    const int gprefdist,
    const int soprefdist,
    const int clprefdist,
    const FPTYPE beta,
    unsigned int mask,
    int dir) {
    if (dir == 0) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_double_dslash_face_unpack_from_back_X_plus_double_double_v4_s4_18"

        // clang-format on
    } else if (dir == 1) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_double_dslash_face_unpack_from_forw_X_plus_double_double_v4_s4_18"

        // clang-format on
    } else if (dir == 2) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_double_dslash_face_unpack_from_back_Y_plus_double_double_v4_s4_18"

        // clang-format on
    } else if (dir == 3) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_double_dslash_face_unpack_from_forw_Y_plus_double_double_v4_s4_18"

        // clang-format on
    } else if (dir == 4) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_double_dslash_face_unpack_from_back_Z_plus_double_double_v4_s4_18"

        // clang-format on
    } else if (dir == 5) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_double_dslash_face_unpack_from_forw_Z_plus_double_double_v4_s4_18"

        // clang-format on
    } else if (dir == 6) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_double_dslash_face_unpack_from_back_T_plus_double_double_v4_s4_18"

        // clang-format on
    } else if (dir == 7) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_double_dslash_face_unpack_from_forw_T_plus_double_double_v4_s4_18"

        // clang-format on
    } else {
        printf("Invalid dir for unpack boundary\n");
        exit(1);
    }
}

template <>
inline void tm_clov_face_finish_dir_minus<FPTYPE, VEC, SOA, COMPRESS12>(
    const FPTYPE *inbuf,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::SU3MatrixBlock *gBase,
    Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *oBase,
    const typename Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FullCloverBlock
        *clBase,
    const int gOffs[VEC],
    const int offs[VEC],
    const int hsprefdist,
    const int gprefdist,
    const int soprefdist,
    const int clprefdist,
    const FPTYPE beta,
    unsigned int mask,
    int dir) {
    if (dir == 0) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_double_dslash_face_unpack_from_back_X_minus_double_double_v4_s4_18"

        // clang-format on
    } else if (dir == 1) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_double_dslash_face_unpack_from_forw_X_minus_double_double_v4_s4_18"

        // clang-format on
    } else if (dir == 2) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_double_dslash_face_unpack_from_back_Y_minus_double_double_v4_s4_18"

        // clang-format on
    } else if (dir == 3) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_double_dslash_face_unpack_from_forw_Y_minus_double_double_v4_s4_18"

        // clang-format on
    } else if (dir == 4) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_double_dslash_face_unpack_from_back_Z_minus_double_double_v4_s4_18"

        // clang-format on
    } else if (dir == 5) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_double_dslash_face_unpack_from_forw_Z_minus_double_double_v4_s4_18"

        // clang-format on
    } else if (dir == 6) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_double_dslash_face_unpack_from_back_T_minus_double_double_v4_s4_18"

        // clang-format on
    } else if (dir == 7) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_double_dslash_face_unpack_from_forw_T_minus_double_double_v4_s4_18"

        // clang-format on
    } else {
        printf("Invalid dir for unpack boundary\n");
        exit(1);
    }
}

#endif // QPHIX_DO_COMMS
#undef FPTYPE
#undef VEC
#undef SOA
#undef COMPRESS12






#define FPTYPE float
#define VEC 8
#define SOA 4
#define COMPRESS12 true
template <>
inline void tm_clov_dslash_plus_vec<FPTYPE, VEC, SOA, COMPRESS12>(
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *xyBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *zbBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *zfBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *tbBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *tfBase,
    Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *oBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::SU3MatrixBlock *gBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FullCloverBlock *clBase,
    const int xbOffs[VEC],
    const int xfOffs[VEC],
    const int ybOffs[VEC],
    const int yfOffs[VEC],
    const int offs[VEC],
    const int gOffs[VEC],
    const int siprefdist1,
    const int siprefdist2,
    const int siprefdist3,
    const int siprefdist4,
    const int gprefdist,
    const int clprefdist,
    const int pfyOffs[VEC],
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase2,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase3,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase4,
    const unsigned int accumulate[8],
    const FPTYPE coeff_s,
    const FPTYPE coeff_t_f,
    const FPTYPE coeff_t_b) {
    // clang-format off
    






#include "qphix/avx2/generated/tm_clov_float_dslash_plus_body_float_float_v8_s4_12"

    // clang-format on
}

template <>
inline void tm_clov_dslash_minus_vec<FPTYPE, VEC, SOA, COMPRESS12>(
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *xyBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *zbBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *zfBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *tbBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *tfBase,
    Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *oBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::SU3MatrixBlock *gBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FullCloverBlock *clBase,
    const int xbOffs[VEC],
    const int xfOffs[VEC],
    const int ybOffs[VEC],
    const int yfOffs[VEC],
    const int offs[VEC],
    const int gOffs[VEC],
    const int siprefdist1,
    const int siprefdist2,
    const int siprefdist3,
    const int siprefdist4,
    const int gprefdist,
    const int clprefdist,
    const int pfyOffs[VEC],
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase2,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase3,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase4,
    const unsigned int accumulate[8],
    const FPTYPE coeff_s,
    const FPTYPE coeff_t_f,
    const FPTYPE coeff_t_b) {
    // clang-format off
    






#include "qphix/avx2/generated/tm_clov_float_dslash_minus_body_float_float_v8_s4_12"

    // clang-format on
}

template <>
inline void tm_clov_dslash_achimbdpsi_plus_vec<FPTYPE, VEC, SOA, COMPRESS12>(
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *xyBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *zbBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *zfBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *tbBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *tfBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *chiBase,
    Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *oBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::SU3MatrixBlock *gBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FullCloverBlock *clBase,
    const int xbOffs[VEC],
    const int xfOffs[VEC],
    const int ybOffs[VEC],
    const int yfOffs[VEC],
    const int offs[VEC],
    const int gOffs[VEC],
    const int siprefdist1,
    const int siprefdist2,
    const int siprefdist3,
    const int siprefdist4,
    const int chiprefdist,
    const int gprefdist,
    const int clprefdist,
    const int pfyOffs[VEC],
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase2,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase3,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase4,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBaseChi,
    const FPTYPE coeff_s,
    const FPTYPE coeff_t_f,
    const FPTYPE coeff_t_b,
    const unsigned int accumulate[8]) {
    // clang-format off
    






#include "qphix/avx2/generated/tm_clov_float_dslash_achimbdpsi_plus_body_float_float_v8_s4_12"

    // clang-format on
}

template <>
inline void tm_clov_dslash_achimbdpsi_minus_vec<FPTYPE, VEC, SOA, COMPRESS12>(
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *xyBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *zbBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *zfBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *tbBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *tfBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *chiBase,
    Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *oBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::SU3MatrixBlock *gBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FullCloverBlock *clBase,
    const int xbOffs[VEC],
    const int xfOffs[VEC],
    const int ybOffs[VEC],
    const int yfOffs[VEC],
    const int offs[VEC],
    const int gOffs[VEC],
    const int siprefdist1,
    const int siprefdist2,
    const int siprefdist3,
    const int siprefdist4,
    const int chiprefdist,
    const int gprefdist,
    const int clprefdist,
    const int pfyOffs[VEC],
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase2,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase3,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase4,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBaseChi,
    const FPTYPE coeff_s,
    const FPTYPE coeff_t_f,
    const FPTYPE coeff_t_b,
    const unsigned int accumulate[8]) {
    // clang-format off
    






#include "qphix/avx2/generated/tm_clov_float_dslash_achimbdpsi_minus_body_float_float_v8_s4_12"

    // clang-format on
}

#ifdef QPHIX_DO_COMMS

template <>
inline void tm_clov_face_finish_dir_plus<FPTYPE, VEC, SOA, COMPRESS12>(
    const FPTYPE *inbuf,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::SU3MatrixBlock *gBase,
    Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *oBase,
    const typename Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FullCloverBlock
        *clBase,
    const int gOffs[VEC],
    const int offs[VEC],
    const int hsprefdist,
    const int gprefdist,
    const int soprefdist,
    const int clprefdist,
    const FPTYPE beta,
    unsigned int mask,
    int dir) {
    if (dir == 0) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_float_dslash_face_unpack_from_back_X_plus_float_float_v8_s4_12"

        // clang-format on
    } else if (dir == 1) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_float_dslash_face_unpack_from_forw_X_plus_float_float_v8_s4_12"

        // clang-format on
    } else if (dir == 2) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_float_dslash_face_unpack_from_back_Y_plus_float_float_v8_s4_12"

        // clang-format on
    } else if (dir == 3) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_float_dslash_face_unpack_from_forw_Y_plus_float_float_v8_s4_12"

        // clang-format on
    } else if (dir == 4) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_float_dslash_face_unpack_from_back_Z_plus_float_float_v8_s4_12"

        // clang-format on
    } else if (dir == 5) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_float_dslash_face_unpack_from_forw_Z_plus_float_float_v8_s4_12"

        // clang-format on
    } else if (dir == 6) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_float_dslash_face_unpack_from_back_T_plus_float_float_v8_s4_12"

        // clang-format on
    } else if (dir == 7) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_float_dslash_face_unpack_from_forw_T_plus_float_float_v8_s4_12"

        // clang-format on
    } else {
        printf("Invalid dir for unpack boundary\n");
        exit(1);
    }
}

template <>
inline void tm_clov_face_finish_dir_minus<FPTYPE, VEC, SOA, COMPRESS12>(
    const FPTYPE *inbuf,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::SU3MatrixBlock *gBase,
    Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *oBase,
    const typename Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FullCloverBlock
        *clBase,
    const int gOffs[VEC],
    const int offs[VEC],
    const int hsprefdist,
    const int gprefdist,
    const int soprefdist,
    const int clprefdist,
    const FPTYPE beta,
    unsigned int mask,
    int dir) {
    if (dir == 0) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_float_dslash_face_unpack_from_back_X_minus_float_float_v8_s4_12"

        // clang-format on
    } else if (dir == 1) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_float_dslash_face_unpack_from_forw_X_minus_float_float_v8_s4_12"

        // clang-format on
    } else if (dir == 2) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_float_dslash_face_unpack_from_back_Y_minus_float_float_v8_s4_12"

        // clang-format on
    } else if (dir == 3) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_float_dslash_face_unpack_from_forw_Y_minus_float_float_v8_s4_12"

        // clang-format on
    } else if (dir == 4) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_float_dslash_face_unpack_from_back_Z_minus_float_float_v8_s4_12"

        // clang-format on
    } else if (dir == 5) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_float_dslash_face_unpack_from_forw_Z_minus_float_float_v8_s4_12"

        // clang-format on
    } else if (dir == 6) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_float_dslash_face_unpack_from_back_T_minus_float_float_v8_s4_12"

        // clang-format on
    } else if (dir == 7) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_float_dslash_face_unpack_from_forw_T_minus_float_float_v8_s4_12"

        // clang-format on
    } else {
        printf("Invalid dir for unpack boundary\n");
        exit(1);
    }
}

#endif // QPHIX_DO_COMMS
#undef FPTYPE
#undef VEC
#undef SOA
#undef COMPRESS12

#define FPTYPE float
#define VEC 8
#define SOA 4
#define COMPRESS12 false
template <>
inline void tm_clov_dslash_plus_vec<FPTYPE, VEC, SOA, COMPRESS12>(
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *xyBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *zbBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *zfBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *tbBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *tfBase,
    Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *oBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::SU3MatrixBlock *gBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FullCloverBlock *clBase,
    const int xbOffs[VEC],
    const int xfOffs[VEC],
    const int ybOffs[VEC],
    const int yfOffs[VEC],
    const int offs[VEC],
    const int gOffs[VEC],
    const int siprefdist1,
    const int siprefdist2,
    const int siprefdist3,
    const int siprefdist4,
    const int gprefdist,
    const int clprefdist,
    const int pfyOffs[VEC],
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase2,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase3,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase4,
    const unsigned int accumulate[8],
    const FPTYPE coeff_s,
    const FPTYPE coeff_t_f,
    const FPTYPE coeff_t_b) {
    // clang-format off
    






#include "qphix/avx2/generated/tm_clov_float_dslash_plus_body_float_float_v8_s4_18"

    // clang-format on
}

template <>
inline void tm_clov_dslash_minus_vec<FPTYPE, VEC, SOA, COMPRESS12>(
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *xyBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *zbBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *zfBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *tbBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *tfBase,
    Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *oBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::SU3MatrixBlock *gBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FullCloverBlock *clBase,
    const int xbOffs[VEC],
    const int xfOffs[VEC],
    const int ybOffs[VEC],
    const int yfOffs[VEC],
    const int offs[VEC],
    const int gOffs[VEC],
    const int siprefdist1,
    const int siprefdist2,
    const int siprefdist3,
    const int siprefdist4,
    const int gprefdist,
    const int clprefdist,
    const int pfyOffs[VEC],
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase2,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase3,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase4,
    const unsigned int accumulate[8],
    const FPTYPE coeff_s,
    const FPTYPE coeff_t_f,
    const FPTYPE coeff_t_b) {
    // clang-format off
    






#include "qphix/avx2/generated/tm_clov_float_dslash_minus_body_float_float_v8_s4_18"

    // clang-format on
}

template <>
inline void tm_clov_dslash_achimbdpsi_plus_vec<FPTYPE, VEC, SOA, COMPRESS12>(
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *xyBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *zbBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *zfBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *tbBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *tfBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *chiBase,
    Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *oBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::SU3MatrixBlock *gBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FullCloverBlock *clBase,
    const int xbOffs[VEC],
    const int xfOffs[VEC],
    const int ybOffs[VEC],
    const int yfOffs[VEC],
    const int offs[VEC],
    const int gOffs[VEC],
    const int siprefdist1,
    const int siprefdist2,
    const int siprefdist3,
    const int siprefdist4,
    const int chiprefdist,
    const int gprefdist,
    const int clprefdist,
    const int pfyOffs[VEC],
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase2,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase3,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase4,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBaseChi,
    const FPTYPE coeff_s,
    const FPTYPE coeff_t_f,
    const FPTYPE coeff_t_b,
    const unsigned int accumulate[8]) {
    // clang-format off
    






#include "qphix/avx2/generated/tm_clov_float_dslash_achimbdpsi_plus_body_float_float_v8_s4_18"

    // clang-format on
}

template <>
inline void tm_clov_dslash_achimbdpsi_minus_vec<FPTYPE, VEC, SOA, COMPRESS12>(
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *xyBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *zbBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *zfBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *tbBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *tfBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *chiBase,
    Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *oBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::SU3MatrixBlock *gBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FullCloverBlock *clBase,
    const int xbOffs[VEC],
    const int xfOffs[VEC],
    const int ybOffs[VEC],
    const int yfOffs[VEC],
    const int offs[VEC],
    const int gOffs[VEC],
    const int siprefdist1,
    const int siprefdist2,
    const int siprefdist3,
    const int siprefdist4,
    const int chiprefdist,
    const int gprefdist,
    const int clprefdist,
    const int pfyOffs[VEC],
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase2,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase3,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase4,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBaseChi,
    const FPTYPE coeff_s,
    const FPTYPE coeff_t_f,
    const FPTYPE coeff_t_b,
    const unsigned int accumulate[8]) {
    // clang-format off
    






#include "qphix/avx2/generated/tm_clov_float_dslash_achimbdpsi_minus_body_float_float_v8_s4_18"

    // clang-format on
}

#ifdef QPHIX_DO_COMMS

template <>
inline void tm_clov_face_finish_dir_plus<FPTYPE, VEC, SOA, COMPRESS12>(
    const FPTYPE *inbuf,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::SU3MatrixBlock *gBase,
    Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *oBase,
    const typename Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FullCloverBlock
        *clBase,
    const int gOffs[VEC],
    const int offs[VEC],
    const int hsprefdist,
    const int gprefdist,
    const int soprefdist,
    const int clprefdist,
    const FPTYPE beta,
    unsigned int mask,
    int dir) {
    if (dir == 0) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_float_dslash_face_unpack_from_back_X_plus_float_float_v8_s4_18"

        // clang-format on
    } else if (dir == 1) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_float_dslash_face_unpack_from_forw_X_plus_float_float_v8_s4_18"

        // clang-format on
    } else if (dir == 2) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_float_dslash_face_unpack_from_back_Y_plus_float_float_v8_s4_18"

        // clang-format on
    } else if (dir == 3) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_float_dslash_face_unpack_from_forw_Y_plus_float_float_v8_s4_18"

        // clang-format on
    } else if (dir == 4) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_float_dslash_face_unpack_from_back_Z_plus_float_float_v8_s4_18"

        // clang-format on
    } else if (dir == 5) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_float_dslash_face_unpack_from_forw_Z_plus_float_float_v8_s4_18"

        // clang-format on
    } else if (dir == 6) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_float_dslash_face_unpack_from_back_T_plus_float_float_v8_s4_18"

        // clang-format on
    } else if (dir == 7) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_float_dslash_face_unpack_from_forw_T_plus_float_float_v8_s4_18"

        // clang-format on
    } else {
        printf("Invalid dir for unpack boundary\n");
        exit(1);
    }
}

template <>
inline void tm_clov_face_finish_dir_minus<FPTYPE, VEC, SOA, COMPRESS12>(
    const FPTYPE *inbuf,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::SU3MatrixBlock *gBase,
    Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *oBase,
    const typename Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FullCloverBlock
        *clBase,
    const int gOffs[VEC],
    const int offs[VEC],
    const int hsprefdist,
    const int gprefdist,
    const int soprefdist,
    const int clprefdist,
    const FPTYPE beta,
    unsigned int mask,
    int dir) {
    if (dir == 0) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_float_dslash_face_unpack_from_back_X_minus_float_float_v8_s4_18"

        // clang-format on
    } else if (dir == 1) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_float_dslash_face_unpack_from_forw_X_minus_float_float_v8_s4_18"

        // clang-format on
    } else if (dir == 2) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_float_dslash_face_unpack_from_back_Y_minus_float_float_v8_s4_18"

        // clang-format on
    } else if (dir == 3) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_float_dslash_face_unpack_from_forw_Y_minus_float_float_v8_s4_18"

        // clang-format on
    } else if (dir == 4) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_float_dslash_face_unpack_from_back_Z_minus_float_float_v8_s4_18"

        // clang-format on
    } else if (dir == 5) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_float_dslash_face_unpack_from_forw_Z_minus_float_float_v8_s4_18"

        // clang-format on
    } else if (dir == 6) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_float_dslash_face_unpack_from_back_T_minus_float_float_v8_s4_18"

        // clang-format on
    } else if (dir == 7) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_float_dslash_face_unpack_from_forw_T_minus_float_float_v8_s4_18"

        // clang-format on
    } else {
        printf("Invalid dir for unpack boundary\n");
        exit(1);
    }
}

#endif // QPHIX_DO_COMMS
#undef FPTYPE
#undef VEC
#undef SOA
#undef COMPRESS12



#define FPTYPE float
#define VEC 8
#define SOA 8
#define COMPRESS12 true
template <>
inline void tm_clov_dslash_plus_vec<FPTYPE, VEC, SOA, COMPRESS12>(
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *xyBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *zbBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *zfBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *tbBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *tfBase,
    Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *oBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::SU3MatrixBlock *gBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FullCloverBlock *clBase,
    const int xbOffs[VEC],
    const int xfOffs[VEC],
    const int ybOffs[VEC],
    const int yfOffs[VEC],
    const int offs[VEC],
    const int gOffs[VEC],
    const int siprefdist1,
    const int siprefdist2,
    const int siprefdist3,
    const int siprefdist4,
    const int gprefdist,
    const int clprefdist,
    const int pfyOffs[VEC],
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase2,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase3,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase4,
    const unsigned int accumulate[8],
    const FPTYPE coeff_s,
    const FPTYPE coeff_t_f,
    const FPTYPE coeff_t_b) {
    // clang-format off
    






#include "qphix/avx2/generated/tm_clov_float_dslash_plus_body_float_float_v8_s8_12"

    // clang-format on
}

template <>
inline void tm_clov_dslash_minus_vec<FPTYPE, VEC, SOA, COMPRESS12>(
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *xyBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *zbBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *zfBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *tbBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *tfBase,
    Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *oBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::SU3MatrixBlock *gBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FullCloverBlock *clBase,
    const int xbOffs[VEC],
    const int xfOffs[VEC],
    const int ybOffs[VEC],
    const int yfOffs[VEC],
    const int offs[VEC],
    const int gOffs[VEC],
    const int siprefdist1,
    const int siprefdist2,
    const int siprefdist3,
    const int siprefdist4,
    const int gprefdist,
    const int clprefdist,
    const int pfyOffs[VEC],
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase2,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase3,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase4,
    const unsigned int accumulate[8],
    const FPTYPE coeff_s,
    const FPTYPE coeff_t_f,
    const FPTYPE coeff_t_b) {
    // clang-format off
    






#include "qphix/avx2/generated/tm_clov_float_dslash_minus_body_float_float_v8_s8_12"

    // clang-format on
}

template <>
inline void tm_clov_dslash_achimbdpsi_plus_vec<FPTYPE, VEC, SOA, COMPRESS12>(
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *xyBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *zbBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *zfBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *tbBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *tfBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *chiBase,
    Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *oBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::SU3MatrixBlock *gBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FullCloverBlock *clBase,
    const int xbOffs[VEC],
    const int xfOffs[VEC],
    const int ybOffs[VEC],
    const int yfOffs[VEC],
    const int offs[VEC],
    const int gOffs[VEC],
    const int siprefdist1,
    const int siprefdist2,
    const int siprefdist3,
    const int siprefdist4,
    const int chiprefdist,
    const int gprefdist,
    const int clprefdist,
    const int pfyOffs[VEC],
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase2,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase3,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase4,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBaseChi,
    const FPTYPE coeff_s,
    const FPTYPE coeff_t_f,
    const FPTYPE coeff_t_b,
    const unsigned int accumulate[8]) {
    // clang-format off
    






#include "qphix/avx2/generated/tm_clov_float_dslash_achimbdpsi_plus_body_float_float_v8_s8_12"

    // clang-format on
}

template <>
inline void tm_clov_dslash_achimbdpsi_minus_vec<FPTYPE, VEC, SOA, COMPRESS12>(
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *xyBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *zbBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *zfBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *tbBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *tfBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *chiBase,
    Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *oBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::SU3MatrixBlock *gBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FullCloverBlock *clBase,
    const int xbOffs[VEC],
    const int xfOffs[VEC],
    const int ybOffs[VEC],
    const int yfOffs[VEC],
    const int offs[VEC],
    const int gOffs[VEC],
    const int siprefdist1,
    const int siprefdist2,
    const int siprefdist3,
    const int siprefdist4,
    const int chiprefdist,
    const int gprefdist,
    const int clprefdist,
    const int pfyOffs[VEC],
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase2,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase3,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase4,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBaseChi,
    const FPTYPE coeff_s,
    const FPTYPE coeff_t_f,
    const FPTYPE coeff_t_b,
    const unsigned int accumulate[8]) {
    // clang-format off
    






#include "qphix/avx2/generated/tm_clov_float_dslash_achimbdpsi_minus_body_float_float_v8_s8_12"

    // clang-format on
}

#ifdef QPHIX_DO_COMMS

template <>
inline void tm_clov_face_finish_dir_plus<FPTYPE, VEC, SOA, COMPRESS12>(
    const FPTYPE *inbuf,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::SU3MatrixBlock *gBase,
    Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *oBase,
    const typename Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FullCloverBlock
        *clBase,
    const int gOffs[VEC],
    const int offs[VEC],
    const int hsprefdist,
    const int gprefdist,
    const int soprefdist,
    const int clprefdist,
    const FPTYPE beta,
    unsigned int mask,
    int dir) {
    if (dir == 0) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_float_dslash_face_unpack_from_back_X_plus_float_float_v8_s8_12"

        // clang-format on
    } else if (dir == 1) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_float_dslash_face_unpack_from_forw_X_plus_float_float_v8_s8_12"

        // clang-format on
    } else if (dir == 2) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_float_dslash_face_unpack_from_back_Y_plus_float_float_v8_s8_12"

        // clang-format on
    } else if (dir == 3) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_float_dslash_face_unpack_from_forw_Y_plus_float_float_v8_s8_12"

        // clang-format on
    } else if (dir == 4) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_float_dslash_face_unpack_from_back_Z_plus_float_float_v8_s8_12"

        // clang-format on
    } else if (dir == 5) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_float_dslash_face_unpack_from_forw_Z_plus_float_float_v8_s8_12"

        // clang-format on
    } else if (dir == 6) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_float_dslash_face_unpack_from_back_T_plus_float_float_v8_s8_12"

        // clang-format on
    } else if (dir == 7) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_float_dslash_face_unpack_from_forw_T_plus_float_float_v8_s8_12"

        // clang-format on
    } else {
        printf("Invalid dir for unpack boundary\n");
        exit(1);
    }
}

template <>
inline void tm_clov_face_finish_dir_minus<FPTYPE, VEC, SOA, COMPRESS12>(
    const FPTYPE *inbuf,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::SU3MatrixBlock *gBase,
    Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *oBase,
    const typename Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FullCloverBlock
        *clBase,
    const int gOffs[VEC],
    const int offs[VEC],
    const int hsprefdist,
    const int gprefdist,
    const int soprefdist,
    const int clprefdist,
    const FPTYPE beta,
    unsigned int mask,
    int dir) {
    if (dir == 0) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_float_dslash_face_unpack_from_back_X_minus_float_float_v8_s8_12"

        // clang-format on
    } else if (dir == 1) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_float_dslash_face_unpack_from_forw_X_minus_float_float_v8_s8_12"

        // clang-format on
    } else if (dir == 2) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_float_dslash_face_unpack_from_back_Y_minus_float_float_v8_s8_12"

        // clang-format on
    } else if (dir == 3) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_float_dslash_face_unpack_from_forw_Y_minus_float_float_v8_s8_12"

        // clang-format on
    } else if (dir == 4) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_float_dslash_face_unpack_from_back_Z_minus_float_float_v8_s8_12"

        // clang-format on
    } else if (dir == 5) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_float_dslash_face_unpack_from_forw_Z_minus_float_float_v8_s8_12"

        // clang-format on
    } else if (dir == 6) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_float_dslash_face_unpack_from_back_T_minus_float_float_v8_s8_12"

        // clang-format on
    } else if (dir == 7) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_float_dslash_face_unpack_from_forw_T_minus_float_float_v8_s8_12"

        // clang-format on
    } else {
        printf("Invalid dir for unpack boundary\n");
        exit(1);
    }
}

#endif // QPHIX_DO_COMMS
#undef FPTYPE
#undef VEC
#undef SOA
#undef COMPRESS12

#define FPTYPE float
#define VEC 8
#define SOA 8
#define COMPRESS12 false
template <>
inline void tm_clov_dslash_plus_vec<FPTYPE, VEC, SOA, COMPRESS12>(
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *xyBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *zbBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *zfBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *tbBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *tfBase,
    Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *oBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::SU3MatrixBlock *gBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FullCloverBlock *clBase,
    const int xbOffs[VEC],
    const int xfOffs[VEC],
    const int ybOffs[VEC],
    const int yfOffs[VEC],
    const int offs[VEC],
    const int gOffs[VEC],
    const int siprefdist1,
    const int siprefdist2,
    const int siprefdist3,
    const int siprefdist4,
    const int gprefdist,
    const int clprefdist,
    const int pfyOffs[VEC],
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase2,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase3,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase4,
    const unsigned int accumulate[8],
    const FPTYPE coeff_s,
    const FPTYPE coeff_t_f,
    const FPTYPE coeff_t_b) {
    // clang-format off
    






#include "qphix/avx2/generated/tm_clov_float_dslash_plus_body_float_float_v8_s8_18"

    // clang-format on
}

template <>
inline void tm_clov_dslash_minus_vec<FPTYPE, VEC, SOA, COMPRESS12>(
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *xyBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *zbBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *zfBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *tbBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *tfBase,
    Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *oBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::SU3MatrixBlock *gBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FullCloverBlock *clBase,
    const int xbOffs[VEC],
    const int xfOffs[VEC],
    const int ybOffs[VEC],
    const int yfOffs[VEC],
    const int offs[VEC],
    const int gOffs[VEC],
    const int siprefdist1,
    const int siprefdist2,
    const int siprefdist3,
    const int siprefdist4,
    const int gprefdist,
    const int clprefdist,
    const int pfyOffs[VEC],
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase2,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase3,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase4,
    const unsigned int accumulate[8],
    const FPTYPE coeff_s,
    const FPTYPE coeff_t_f,
    const FPTYPE coeff_t_b) {
    // clang-format off
    






#include "qphix/avx2/generated/tm_clov_float_dslash_minus_body_float_float_v8_s8_18"

    // clang-format on
}

template <>
inline void tm_clov_dslash_achimbdpsi_plus_vec<FPTYPE, VEC, SOA, COMPRESS12>(
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *xyBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *zbBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *zfBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *tbBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *tfBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *chiBase,
    Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *oBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::SU3MatrixBlock *gBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FullCloverBlock *clBase,
    const int xbOffs[VEC],
    const int xfOffs[VEC],
    const int ybOffs[VEC],
    const int yfOffs[VEC],
    const int offs[VEC],
    const int gOffs[VEC],
    const int siprefdist1,
    const int siprefdist2,
    const int siprefdist3,
    const int siprefdist4,
    const int chiprefdist,
    const int gprefdist,
    const int clprefdist,
    const int pfyOffs[VEC],
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase2,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase3,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase4,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBaseChi,
    const FPTYPE coeff_s,
    const FPTYPE coeff_t_f,
    const FPTYPE coeff_t_b,
    const unsigned int accumulate[8]) {
    // clang-format off
    






#include "qphix/avx2/generated/tm_clov_float_dslash_achimbdpsi_plus_body_float_float_v8_s8_18"

    // clang-format on
}

template <>
inline void tm_clov_dslash_achimbdpsi_minus_vec<FPTYPE, VEC, SOA, COMPRESS12>(
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *xyBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *zbBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *zfBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *tbBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *tfBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *chiBase,
    Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *oBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::SU3MatrixBlock *gBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FullCloverBlock *clBase,
    const int xbOffs[VEC],
    const int xfOffs[VEC],
    const int ybOffs[VEC],
    const int yfOffs[VEC],
    const int offs[VEC],
    const int gOffs[VEC],
    const int siprefdist1,
    const int siprefdist2,
    const int siprefdist3,
    const int siprefdist4,
    const int chiprefdist,
    const int gprefdist,
    const int clprefdist,
    const int pfyOffs[VEC],
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase2,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase3,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase4,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBaseChi,
    const FPTYPE coeff_s,
    const FPTYPE coeff_t_f,
    const FPTYPE coeff_t_b,
    const unsigned int accumulate[8]) {
    // clang-format off
    






#include "qphix/avx2/generated/tm_clov_float_dslash_achimbdpsi_minus_body_float_float_v8_s8_18"

    // clang-format on
}

#ifdef QPHIX_DO_COMMS

template <>
inline void tm_clov_face_finish_dir_plus<FPTYPE, VEC, SOA, COMPRESS12>(
    const FPTYPE *inbuf,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::SU3MatrixBlock *gBase,
    Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *oBase,
    const typename Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FullCloverBlock
        *clBase,
    const int gOffs[VEC],
    const int offs[VEC],
    const int hsprefdist,
    const int gprefdist,
    const int soprefdist,
    const int clprefdist,
    const FPTYPE beta,
    unsigned int mask,
    int dir) {
    if (dir == 0) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_float_dslash_face_unpack_from_back_X_plus_float_float_v8_s8_18"

        // clang-format on
    } else if (dir == 1) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_float_dslash_face_unpack_from_forw_X_plus_float_float_v8_s8_18"

        // clang-format on
    } else if (dir == 2) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_float_dslash_face_unpack_from_back_Y_plus_float_float_v8_s8_18"

        // clang-format on
    } else if (dir == 3) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_float_dslash_face_unpack_from_forw_Y_plus_float_float_v8_s8_18"

        // clang-format on
    } else if (dir == 4) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_float_dslash_face_unpack_from_back_Z_plus_float_float_v8_s8_18"

        // clang-format on
    } else if (dir == 5) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_float_dslash_face_unpack_from_forw_Z_plus_float_float_v8_s8_18"

        // clang-format on
    } else if (dir == 6) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_float_dslash_face_unpack_from_back_T_plus_float_float_v8_s8_18"

        // clang-format on
    } else if (dir == 7) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_float_dslash_face_unpack_from_forw_T_plus_float_float_v8_s8_18"

        // clang-format on
    } else {
        printf("Invalid dir for unpack boundary\n");
        exit(1);
    }
}

template <>
inline void tm_clov_face_finish_dir_minus<FPTYPE, VEC, SOA, COMPRESS12>(
    const FPTYPE *inbuf,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::SU3MatrixBlock *gBase,
    Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *oBase,
    const typename Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FullCloverBlock
        *clBase,
    const int gOffs[VEC],
    const int offs[VEC],
    const int hsprefdist,
    const int gprefdist,
    const int soprefdist,
    const int clprefdist,
    const FPTYPE beta,
    unsigned int mask,
    int dir) {
    if (dir == 0) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_float_dslash_face_unpack_from_back_X_minus_float_float_v8_s8_18"

        // clang-format on
    } else if (dir == 1) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_float_dslash_face_unpack_from_forw_X_minus_float_float_v8_s8_18"

        // clang-format on
    } else if (dir == 2) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_float_dslash_face_unpack_from_back_Y_minus_float_float_v8_s8_18"

        // clang-format on
    } else if (dir == 3) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_float_dslash_face_unpack_from_forw_Y_minus_float_float_v8_s8_18"

        // clang-format on
    } else if (dir == 4) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_float_dslash_face_unpack_from_back_Z_minus_float_float_v8_s8_18"

        // clang-format on
    } else if (dir == 5) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_float_dslash_face_unpack_from_forw_Z_minus_float_float_v8_s8_18"

        // clang-format on
    } else if (dir == 6) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_float_dslash_face_unpack_from_back_T_minus_float_float_v8_s8_18"

        // clang-format on
    } else if (dir == 7) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_float_dslash_face_unpack_from_forw_T_minus_float_float_v8_s8_18"

        // clang-format on
    } else {
        printf("Invalid dir for unpack boundary\n");
        exit(1);
    }
}

#endif // QPHIX_DO_COMMS
#undef FPTYPE
#undef VEC
#undef SOA
#undef COMPRESS12






#define FPTYPE half
#define VEC 8
#define SOA 4
#define COMPRESS12 true
template <>
inline void tm_clov_dslash_plus_vec<FPTYPE, VEC, SOA, COMPRESS12>(
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *xyBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *zbBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *zfBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *tbBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *tfBase,
    Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *oBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::SU3MatrixBlock *gBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FullCloverBlock *clBase,
    const int xbOffs[VEC],
    const int xfOffs[VEC],
    const int ybOffs[VEC],
    const int yfOffs[VEC],
    const int offs[VEC],
    const int gOffs[VEC],
    const int siprefdist1,
    const int siprefdist2,
    const int siprefdist3,
    const int siprefdist4,
    const int gprefdist,
    const int clprefdist,
    const int pfyOffs[VEC],
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase2,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase3,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase4,
    const unsigned int accumulate[8],
    const FPTYPE coeff_s,
    const FPTYPE coeff_t_f,
    const FPTYPE coeff_t_b) {
    // clang-format off
    






#include "qphix/avx2/generated/tm_clov_half_dslash_plus_body_half_half_v8_s4_12"

    // clang-format on
}

template <>
inline void tm_clov_dslash_minus_vec<FPTYPE, VEC, SOA, COMPRESS12>(
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *xyBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *zbBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *zfBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *tbBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *tfBase,
    Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *oBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::SU3MatrixBlock *gBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FullCloverBlock *clBase,
    const int xbOffs[VEC],
    const int xfOffs[VEC],
    const int ybOffs[VEC],
    const int yfOffs[VEC],
    const int offs[VEC],
    const int gOffs[VEC],
    const int siprefdist1,
    const int siprefdist2,
    const int siprefdist3,
    const int siprefdist4,
    const int gprefdist,
    const int clprefdist,
    const int pfyOffs[VEC],
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase2,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase3,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase4,
    const unsigned int accumulate[8],
    const FPTYPE coeff_s,
    const FPTYPE coeff_t_f,
    const FPTYPE coeff_t_b) {
    // clang-format off
    






#include "qphix/avx2/generated/tm_clov_half_dslash_minus_body_half_half_v8_s4_12"

    // clang-format on
}

template <>
inline void tm_clov_dslash_achimbdpsi_plus_vec<FPTYPE, VEC, SOA, COMPRESS12>(
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *xyBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *zbBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *zfBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *tbBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *tfBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *chiBase,
    Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *oBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::SU3MatrixBlock *gBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FullCloverBlock *clBase,
    const int xbOffs[VEC],
    const int xfOffs[VEC],
    const int ybOffs[VEC],
    const int yfOffs[VEC],
    const int offs[VEC],
    const int gOffs[VEC],
    const int siprefdist1,
    const int siprefdist2,
    const int siprefdist3,
    const int siprefdist4,
    const int chiprefdist,
    const int gprefdist,
    const int clprefdist,
    const int pfyOffs[VEC],
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase2,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase3,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase4,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBaseChi,
    const FPTYPE coeff_s,
    const FPTYPE coeff_t_f,
    const FPTYPE coeff_t_b,
    const unsigned int accumulate[8]) {
    // clang-format off
    






#include "qphix/avx2/generated/tm_clov_half_dslash_achimbdpsi_plus_body_half_half_v8_s4_12"

    // clang-format on
}

template <>
inline void tm_clov_dslash_achimbdpsi_minus_vec<FPTYPE, VEC, SOA, COMPRESS12>(
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *xyBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *zbBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *zfBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *tbBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *tfBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *chiBase,
    Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *oBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::SU3MatrixBlock *gBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FullCloverBlock *clBase,
    const int xbOffs[VEC],
    const int xfOffs[VEC],
    const int ybOffs[VEC],
    const int yfOffs[VEC],
    const int offs[VEC],
    const int gOffs[VEC],
    const int siprefdist1,
    const int siprefdist2,
    const int siprefdist3,
    const int siprefdist4,
    const int chiprefdist,
    const int gprefdist,
    const int clprefdist,
    const int pfyOffs[VEC],
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase2,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase3,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase4,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBaseChi,
    const FPTYPE coeff_s,
    const FPTYPE coeff_t_f,
    const FPTYPE coeff_t_b,
    const unsigned int accumulate[8]) {
    // clang-format off
    






#include "qphix/avx2/generated/tm_clov_half_dslash_achimbdpsi_minus_body_half_half_v8_s4_12"

    // clang-format on
}

#ifdef QPHIX_DO_COMMS

template <>
inline void tm_clov_face_finish_dir_plus<FPTYPE, VEC, SOA, COMPRESS12>(
    const FPTYPE *inbuf,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::SU3MatrixBlock *gBase,
    Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *oBase,
    const typename Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FullCloverBlock
        *clBase,
    const int gOffs[VEC],
    const int offs[VEC],
    const int hsprefdist,
    const int gprefdist,
    const int soprefdist,
    const int clprefdist,
    const FPTYPE beta,
    unsigned int mask,
    int dir) {
    if (dir == 0) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_half_dslash_face_unpack_from_back_X_plus_half_half_v8_s4_12"

        // clang-format on
    } else if (dir == 1) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_half_dslash_face_unpack_from_forw_X_plus_half_half_v8_s4_12"

        // clang-format on
    } else if (dir == 2) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_half_dslash_face_unpack_from_back_Y_plus_half_half_v8_s4_12"

        // clang-format on
    } else if (dir == 3) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_half_dslash_face_unpack_from_forw_Y_plus_half_half_v8_s4_12"

        // clang-format on
    } else if (dir == 4) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_half_dslash_face_unpack_from_back_Z_plus_half_half_v8_s4_12"

        // clang-format on
    } else if (dir == 5) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_half_dslash_face_unpack_from_forw_Z_plus_half_half_v8_s4_12"

        // clang-format on
    } else if (dir == 6) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_half_dslash_face_unpack_from_back_T_plus_half_half_v8_s4_12"

        // clang-format on
    } else if (dir == 7) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_half_dslash_face_unpack_from_forw_T_plus_half_half_v8_s4_12"

        // clang-format on
    } else {
        printf("Invalid dir for unpack boundary\n");
        exit(1);
    }
}

template <>
inline void tm_clov_face_finish_dir_minus<FPTYPE, VEC, SOA, COMPRESS12>(
    const FPTYPE *inbuf,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::SU3MatrixBlock *gBase,
    Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *oBase,
    const typename Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FullCloverBlock
        *clBase,
    const int gOffs[VEC],
    const int offs[VEC],
    const int hsprefdist,
    const int gprefdist,
    const int soprefdist,
    const int clprefdist,
    const FPTYPE beta,
    unsigned int mask,
    int dir) {
    if (dir == 0) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_half_dslash_face_unpack_from_back_X_minus_half_half_v8_s4_12"

        // clang-format on
    } else if (dir == 1) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_half_dslash_face_unpack_from_forw_X_minus_half_half_v8_s4_12"

        // clang-format on
    } else if (dir == 2) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_half_dslash_face_unpack_from_back_Y_minus_half_half_v8_s4_12"

        // clang-format on
    } else if (dir == 3) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_half_dslash_face_unpack_from_forw_Y_minus_half_half_v8_s4_12"

        // clang-format on
    } else if (dir == 4) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_half_dslash_face_unpack_from_back_Z_minus_half_half_v8_s4_12"

        // clang-format on
    } else if (dir == 5) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_half_dslash_face_unpack_from_forw_Z_minus_half_half_v8_s4_12"

        // clang-format on
    } else if (dir == 6) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_half_dslash_face_unpack_from_back_T_minus_half_half_v8_s4_12"

        // clang-format on
    } else if (dir == 7) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_half_dslash_face_unpack_from_forw_T_minus_half_half_v8_s4_12"

        // clang-format on
    } else {
        printf("Invalid dir for unpack boundary\n");
        exit(1);
    }
}

#endif // QPHIX_DO_COMMS
#undef FPTYPE
#undef VEC
#undef SOA
#undef COMPRESS12

#define FPTYPE half
#define VEC 8
#define SOA 4
#define COMPRESS12 false
template <>
inline void tm_clov_dslash_plus_vec<FPTYPE, VEC, SOA, COMPRESS12>(
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *xyBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *zbBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *zfBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *tbBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *tfBase,
    Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *oBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::SU3MatrixBlock *gBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FullCloverBlock *clBase,
    const int xbOffs[VEC],
    const int xfOffs[VEC],
    const int ybOffs[VEC],
    const int yfOffs[VEC],
    const int offs[VEC],
    const int gOffs[VEC],
    const int siprefdist1,
    const int siprefdist2,
    const int siprefdist3,
    const int siprefdist4,
    const int gprefdist,
    const int clprefdist,
    const int pfyOffs[VEC],
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase2,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase3,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase4,
    const unsigned int accumulate[8],
    const FPTYPE coeff_s,
    const FPTYPE coeff_t_f,
    const FPTYPE coeff_t_b) {
    // clang-format off
    






#include "qphix/avx2/generated/tm_clov_half_dslash_plus_body_half_half_v8_s4_18"

    // clang-format on
}

template <>
inline void tm_clov_dslash_minus_vec<FPTYPE, VEC, SOA, COMPRESS12>(
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *xyBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *zbBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *zfBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *tbBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *tfBase,
    Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *oBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::SU3MatrixBlock *gBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FullCloverBlock *clBase,
    const int xbOffs[VEC],
    const int xfOffs[VEC],
    const int ybOffs[VEC],
    const int yfOffs[VEC],
    const int offs[VEC],
    const int gOffs[VEC],
    const int siprefdist1,
    const int siprefdist2,
    const int siprefdist3,
    const int siprefdist4,
    const int gprefdist,
    const int clprefdist,
    const int pfyOffs[VEC],
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase2,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase3,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase4,
    const unsigned int accumulate[8],
    const FPTYPE coeff_s,
    const FPTYPE coeff_t_f,
    const FPTYPE coeff_t_b) {
    // clang-format off
    






#include "qphix/avx2/generated/tm_clov_half_dslash_minus_body_half_half_v8_s4_18"

    // clang-format on
}

template <>
inline void tm_clov_dslash_achimbdpsi_plus_vec<FPTYPE, VEC, SOA, COMPRESS12>(
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *xyBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *zbBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *zfBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *tbBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *tfBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *chiBase,
    Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *oBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::SU3MatrixBlock *gBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FullCloverBlock *clBase,
    const int xbOffs[VEC],
    const int xfOffs[VEC],
    const int ybOffs[VEC],
    const int yfOffs[VEC],
    const int offs[VEC],
    const int gOffs[VEC],
    const int siprefdist1,
    const int siprefdist2,
    const int siprefdist3,
    const int siprefdist4,
    const int chiprefdist,
    const int gprefdist,
    const int clprefdist,
    const int pfyOffs[VEC],
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase2,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase3,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase4,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBaseChi,
    const FPTYPE coeff_s,
    const FPTYPE coeff_t_f,
    const FPTYPE coeff_t_b,
    const unsigned int accumulate[8]) {
    // clang-format off
    






#include "qphix/avx2/generated/tm_clov_half_dslash_achimbdpsi_plus_body_half_half_v8_s4_18"

    // clang-format on
}

template <>
inline void tm_clov_dslash_achimbdpsi_minus_vec<FPTYPE, VEC, SOA, COMPRESS12>(
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *xyBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *zbBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *zfBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *tbBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *tfBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *chiBase,
    Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *oBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::SU3MatrixBlock *gBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FullCloverBlock *clBase,
    const int xbOffs[VEC],
    const int xfOffs[VEC],
    const int ybOffs[VEC],
    const int yfOffs[VEC],
    const int offs[VEC],
    const int gOffs[VEC],
    const int siprefdist1,
    const int siprefdist2,
    const int siprefdist3,
    const int siprefdist4,
    const int chiprefdist,
    const int gprefdist,
    const int clprefdist,
    const int pfyOffs[VEC],
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase2,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase3,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase4,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBaseChi,
    const FPTYPE coeff_s,
    const FPTYPE coeff_t_f,
    const FPTYPE coeff_t_b,
    const unsigned int accumulate[8]) {
    // clang-format off
    






#include "qphix/avx2/generated/tm_clov_half_dslash_achimbdpsi_minus_body_half_half_v8_s4_18"

    // clang-format on
}

#ifdef QPHIX_DO_COMMS

template <>
inline void tm_clov_face_finish_dir_plus<FPTYPE, VEC, SOA, COMPRESS12>(
    const FPTYPE *inbuf,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::SU3MatrixBlock *gBase,
    Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *oBase,
    const typename Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FullCloverBlock
        *clBase,
    const int gOffs[VEC],
    const int offs[VEC],
    const int hsprefdist,
    const int gprefdist,
    const int soprefdist,
    const int clprefdist,
    const FPTYPE beta,
    unsigned int mask,
    int dir) {
    if (dir == 0) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_half_dslash_face_unpack_from_back_X_plus_half_half_v8_s4_18"

        // clang-format on
    } else if (dir == 1) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_half_dslash_face_unpack_from_forw_X_plus_half_half_v8_s4_18"

        // clang-format on
    } else if (dir == 2) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_half_dslash_face_unpack_from_back_Y_plus_half_half_v8_s4_18"

        // clang-format on
    } else if (dir == 3) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_half_dslash_face_unpack_from_forw_Y_plus_half_half_v8_s4_18"

        // clang-format on
    } else if (dir == 4) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_half_dslash_face_unpack_from_back_Z_plus_half_half_v8_s4_18"

        // clang-format on
    } else if (dir == 5) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_half_dslash_face_unpack_from_forw_Z_plus_half_half_v8_s4_18"

        // clang-format on
    } else if (dir == 6) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_half_dslash_face_unpack_from_back_T_plus_half_half_v8_s4_18"

        // clang-format on
    } else if (dir == 7) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_half_dslash_face_unpack_from_forw_T_plus_half_half_v8_s4_18"

        // clang-format on
    } else {
        printf("Invalid dir for unpack boundary\n");
        exit(1);
    }
}

template <>
inline void tm_clov_face_finish_dir_minus<FPTYPE, VEC, SOA, COMPRESS12>(
    const FPTYPE *inbuf,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::SU3MatrixBlock *gBase,
    Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *oBase,
    const typename Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FullCloverBlock
        *clBase,
    const int gOffs[VEC],
    const int offs[VEC],
    const int hsprefdist,
    const int gprefdist,
    const int soprefdist,
    const int clprefdist,
    const FPTYPE beta,
    unsigned int mask,
    int dir) {
    if (dir == 0) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_half_dslash_face_unpack_from_back_X_minus_half_half_v8_s4_18"

        // clang-format on
    } else if (dir == 1) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_half_dslash_face_unpack_from_forw_X_minus_half_half_v8_s4_18"

        // clang-format on
    } else if (dir == 2) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_half_dslash_face_unpack_from_back_Y_minus_half_half_v8_s4_18"

        // clang-format on
    } else if (dir == 3) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_half_dslash_face_unpack_from_forw_Y_minus_half_half_v8_s4_18"

        // clang-format on
    } else if (dir == 4) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_half_dslash_face_unpack_from_back_Z_minus_half_half_v8_s4_18"

        // clang-format on
    } else if (dir == 5) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_half_dslash_face_unpack_from_forw_Z_minus_half_half_v8_s4_18"

        // clang-format on
    } else if (dir == 6) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_half_dslash_face_unpack_from_back_T_minus_half_half_v8_s4_18"

        // clang-format on
    } else if (dir == 7) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_half_dslash_face_unpack_from_forw_T_minus_half_half_v8_s4_18"

        // clang-format on
    } else {
        printf("Invalid dir for unpack boundary\n");
        exit(1);
    }
}

#endif // QPHIX_DO_COMMS
#undef FPTYPE
#undef VEC
#undef SOA
#undef COMPRESS12



#define FPTYPE half
#define VEC 8
#define SOA 8
#define COMPRESS12 true
template <>
inline void tm_clov_dslash_plus_vec<FPTYPE, VEC, SOA, COMPRESS12>(
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *xyBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *zbBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *zfBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *tbBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *tfBase,
    Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *oBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::SU3MatrixBlock *gBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FullCloverBlock *clBase,
    const int xbOffs[VEC],
    const int xfOffs[VEC],
    const int ybOffs[VEC],
    const int yfOffs[VEC],
    const int offs[VEC],
    const int gOffs[VEC],
    const int siprefdist1,
    const int siprefdist2,
    const int siprefdist3,
    const int siprefdist4,
    const int gprefdist,
    const int clprefdist,
    const int pfyOffs[VEC],
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase2,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase3,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase4,
    const unsigned int accumulate[8],
    const FPTYPE coeff_s,
    const FPTYPE coeff_t_f,
    const FPTYPE coeff_t_b) {
    // clang-format off
    






#include "qphix/avx2/generated/tm_clov_half_dslash_plus_body_half_half_v8_s8_12"

    // clang-format on
}

template <>
inline void tm_clov_dslash_minus_vec<FPTYPE, VEC, SOA, COMPRESS12>(
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *xyBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *zbBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *zfBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *tbBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *tfBase,
    Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *oBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::SU3MatrixBlock *gBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FullCloverBlock *clBase,
    const int xbOffs[VEC],
    const int xfOffs[VEC],
    const int ybOffs[VEC],
    const int yfOffs[VEC],
    const int offs[VEC],
    const int gOffs[VEC],
    const int siprefdist1,
    const int siprefdist2,
    const int siprefdist3,
    const int siprefdist4,
    const int gprefdist,
    const int clprefdist,
    const int pfyOffs[VEC],
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase2,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase3,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase4,
    const unsigned int accumulate[8],
    const FPTYPE coeff_s,
    const FPTYPE coeff_t_f,
    const FPTYPE coeff_t_b) {
    // clang-format off
    






#include "qphix/avx2/generated/tm_clov_half_dslash_minus_body_half_half_v8_s8_12"

    // clang-format on
}

template <>
inline void tm_clov_dslash_achimbdpsi_plus_vec<FPTYPE, VEC, SOA, COMPRESS12>(
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *xyBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *zbBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *zfBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *tbBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *tfBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *chiBase,
    Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *oBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::SU3MatrixBlock *gBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FullCloverBlock *clBase,
    const int xbOffs[VEC],
    const int xfOffs[VEC],
    const int ybOffs[VEC],
    const int yfOffs[VEC],
    const int offs[VEC],
    const int gOffs[VEC],
    const int siprefdist1,
    const int siprefdist2,
    const int siprefdist3,
    const int siprefdist4,
    const int chiprefdist,
    const int gprefdist,
    const int clprefdist,
    const int pfyOffs[VEC],
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase2,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase3,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase4,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBaseChi,
    const FPTYPE coeff_s,
    const FPTYPE coeff_t_f,
    const FPTYPE coeff_t_b,
    const unsigned int accumulate[8]) {
    // clang-format off
    






#include "qphix/avx2/generated/tm_clov_half_dslash_achimbdpsi_plus_body_half_half_v8_s8_12"

    // clang-format on
}

template <>
inline void tm_clov_dslash_achimbdpsi_minus_vec<FPTYPE, VEC, SOA, COMPRESS12>(
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *xyBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *zbBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *zfBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *tbBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *tfBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *chiBase,
    Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *oBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::SU3MatrixBlock *gBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FullCloverBlock *clBase,
    const int xbOffs[VEC],
    const int xfOffs[VEC],
    const int ybOffs[VEC],
    const int yfOffs[VEC],
    const int offs[VEC],
    const int gOffs[VEC],
    const int siprefdist1,
    const int siprefdist2,
    const int siprefdist3,
    const int siprefdist4,
    const int chiprefdist,
    const int gprefdist,
    const int clprefdist,
    const int pfyOffs[VEC],
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase2,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase3,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase4,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBaseChi,
    const FPTYPE coeff_s,
    const FPTYPE coeff_t_f,
    const FPTYPE coeff_t_b,
    const unsigned int accumulate[8]) {
    // clang-format off
    






#include "qphix/avx2/generated/tm_clov_half_dslash_achimbdpsi_minus_body_half_half_v8_s8_12"

    // clang-format on
}

#ifdef QPHIX_DO_COMMS

template <>
inline void tm_clov_face_finish_dir_plus<FPTYPE, VEC, SOA, COMPRESS12>(
    const FPTYPE *inbuf,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::SU3MatrixBlock *gBase,
    Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *oBase,
    const typename Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FullCloverBlock
        *clBase,
    const int gOffs[VEC],
    const int offs[VEC],
    const int hsprefdist,
    const int gprefdist,
    const int soprefdist,
    const int clprefdist,
    const FPTYPE beta,
    unsigned int mask,
    int dir) {
    if (dir == 0) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_half_dslash_face_unpack_from_back_X_plus_half_half_v8_s8_12"

        // clang-format on
    } else if (dir == 1) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_half_dslash_face_unpack_from_forw_X_plus_half_half_v8_s8_12"

        // clang-format on
    } else if (dir == 2) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_half_dslash_face_unpack_from_back_Y_plus_half_half_v8_s8_12"

        // clang-format on
    } else if (dir == 3) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_half_dslash_face_unpack_from_forw_Y_plus_half_half_v8_s8_12"

        // clang-format on
    } else if (dir == 4) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_half_dslash_face_unpack_from_back_Z_plus_half_half_v8_s8_12"

        // clang-format on
    } else if (dir == 5) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_half_dslash_face_unpack_from_forw_Z_plus_half_half_v8_s8_12"

        // clang-format on
    } else if (dir == 6) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_half_dslash_face_unpack_from_back_T_plus_half_half_v8_s8_12"

        // clang-format on
    } else if (dir == 7) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_half_dslash_face_unpack_from_forw_T_plus_half_half_v8_s8_12"

        // clang-format on
    } else {
        printf("Invalid dir for unpack boundary\n");
        exit(1);
    }
}

template <>
inline void tm_clov_face_finish_dir_minus<FPTYPE, VEC, SOA, COMPRESS12>(
    const FPTYPE *inbuf,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::SU3MatrixBlock *gBase,
    Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *oBase,
    const typename Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FullCloverBlock
        *clBase,
    const int gOffs[VEC],
    const int offs[VEC],
    const int hsprefdist,
    const int gprefdist,
    const int soprefdist,
    const int clprefdist,
    const FPTYPE beta,
    unsigned int mask,
    int dir) {
    if (dir == 0) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_half_dslash_face_unpack_from_back_X_minus_half_half_v8_s8_12"

        // clang-format on
    } else if (dir == 1) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_half_dslash_face_unpack_from_forw_X_minus_half_half_v8_s8_12"

        // clang-format on
    } else if (dir == 2) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_half_dslash_face_unpack_from_back_Y_minus_half_half_v8_s8_12"

        // clang-format on
    } else if (dir == 3) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_half_dslash_face_unpack_from_forw_Y_minus_half_half_v8_s8_12"

        // clang-format on
    } else if (dir == 4) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_half_dslash_face_unpack_from_back_Z_minus_half_half_v8_s8_12"

        // clang-format on
    } else if (dir == 5) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_half_dslash_face_unpack_from_forw_Z_minus_half_half_v8_s8_12"

        // clang-format on
    } else if (dir == 6) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_half_dslash_face_unpack_from_back_T_minus_half_half_v8_s8_12"

        // clang-format on
    } else if (dir == 7) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_half_dslash_face_unpack_from_forw_T_minus_half_half_v8_s8_12"

        // clang-format on
    } else {
        printf("Invalid dir for unpack boundary\n");
        exit(1);
    }
}

#endif // QPHIX_DO_COMMS
#undef FPTYPE
#undef VEC
#undef SOA
#undef COMPRESS12

#define FPTYPE half
#define VEC 8
#define SOA 8
#define COMPRESS12 false
template <>
inline void tm_clov_dslash_plus_vec<FPTYPE, VEC, SOA, COMPRESS12>(
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *xyBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *zbBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *zfBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *tbBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *tfBase,
    Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *oBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::SU3MatrixBlock *gBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FullCloverBlock *clBase,
    const int xbOffs[VEC],
    const int xfOffs[VEC],
    const int ybOffs[VEC],
    const int yfOffs[VEC],
    const int offs[VEC],
    const int gOffs[VEC],
    const int siprefdist1,
    const int siprefdist2,
    const int siprefdist3,
    const int siprefdist4,
    const int gprefdist,
    const int clprefdist,
    const int pfyOffs[VEC],
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase2,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase3,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase4,
    const unsigned int accumulate[8],
    const FPTYPE coeff_s,
    const FPTYPE coeff_t_f,
    const FPTYPE coeff_t_b) {
    // clang-format off
    






#include "qphix/avx2/generated/tm_clov_half_dslash_plus_body_half_half_v8_s8_18"

    // clang-format on
}

template <>
inline void tm_clov_dslash_minus_vec<FPTYPE, VEC, SOA, COMPRESS12>(
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *xyBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *zbBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *zfBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *tbBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *tfBase,
    Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *oBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::SU3MatrixBlock *gBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FullCloverBlock *clBase,
    const int xbOffs[VEC],
    const int xfOffs[VEC],
    const int ybOffs[VEC],
    const int yfOffs[VEC],
    const int offs[VEC],
    const int gOffs[VEC],
    const int siprefdist1,
    const int siprefdist2,
    const int siprefdist3,
    const int siprefdist4,
    const int gprefdist,
    const int clprefdist,
    const int pfyOffs[VEC],
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase2,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase3,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase4,
    const unsigned int accumulate[8],
    const FPTYPE coeff_s,
    const FPTYPE coeff_t_f,
    const FPTYPE coeff_t_b) {
    // clang-format off
    






#include "qphix/avx2/generated/tm_clov_half_dslash_minus_body_half_half_v8_s8_18"

    // clang-format on
}

template <>
inline void tm_clov_dslash_achimbdpsi_plus_vec<FPTYPE, VEC, SOA, COMPRESS12>(
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *xyBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *zbBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *zfBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *tbBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *tfBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *chiBase,
    Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *oBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::SU3MatrixBlock *gBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FullCloverBlock *clBase,
    const int xbOffs[VEC],
    const int xfOffs[VEC],
    const int ybOffs[VEC],
    const int yfOffs[VEC],
    const int offs[VEC],
    const int gOffs[VEC],
    const int siprefdist1,
    const int siprefdist2,
    const int siprefdist3,
    const int siprefdist4,
    const int chiprefdist,
    const int gprefdist,
    const int clprefdist,
    const int pfyOffs[VEC],
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase2,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase3,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase4,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBaseChi,
    const FPTYPE coeff_s,
    const FPTYPE coeff_t_f,
    const FPTYPE coeff_t_b,
    const unsigned int accumulate[8]) {
    // clang-format off
    






#include "qphix/avx2/generated/tm_clov_half_dslash_achimbdpsi_plus_body_half_half_v8_s8_18"

    // clang-format on
}

template <>
inline void tm_clov_dslash_achimbdpsi_minus_vec<FPTYPE, VEC, SOA, COMPRESS12>(
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *xyBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *zbBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *zfBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *tbBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *tfBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *chiBase,
    Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *oBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::SU3MatrixBlock *gBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FullCloverBlock *clBase,
    const int xbOffs[VEC],
    const int xfOffs[VEC],
    const int ybOffs[VEC],
    const int yfOffs[VEC],
    const int offs[VEC],
    const int gOffs[VEC],
    const int siprefdist1,
    const int siprefdist2,
    const int siprefdist3,
    const int siprefdist4,
    const int chiprefdist,
    const int gprefdist,
    const int clprefdist,
    const int pfyOffs[VEC],
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase2,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase3,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase4,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBaseChi,
    const FPTYPE coeff_s,
    const FPTYPE coeff_t_f,
    const FPTYPE coeff_t_b,
    const unsigned int accumulate[8]) {
    // clang-format off
    






#include "qphix/avx2/generated/tm_clov_half_dslash_achimbdpsi_minus_body_half_half_v8_s8_18"

    // clang-format on
}

#ifdef QPHIX_DO_COMMS

template <>
inline void tm_clov_face_finish_dir_plus<FPTYPE, VEC, SOA, COMPRESS12>(
    const FPTYPE *inbuf,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::SU3MatrixBlock *gBase,
    Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *oBase,
    const typename Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FullCloverBlock
        *clBase,
    const int gOffs[VEC],
    const int offs[VEC],
    const int hsprefdist,
    const int gprefdist,
    const int soprefdist,
    const int clprefdist,
    const FPTYPE beta,
    unsigned int mask,
    int dir) {
    if (dir == 0) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_half_dslash_face_unpack_from_back_X_plus_half_half_v8_s8_18"

        // clang-format on
    } else if (dir == 1) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_half_dslash_face_unpack_from_forw_X_plus_half_half_v8_s8_18"

        // clang-format on
    } else if (dir == 2) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_half_dslash_face_unpack_from_back_Y_plus_half_half_v8_s8_18"

        // clang-format on
    } else if (dir == 3) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_half_dslash_face_unpack_from_forw_Y_plus_half_half_v8_s8_18"

        // clang-format on
    } else if (dir == 4) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_half_dslash_face_unpack_from_back_Z_plus_half_half_v8_s8_18"

        // clang-format on
    } else if (dir == 5) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_half_dslash_face_unpack_from_forw_Z_plus_half_half_v8_s8_18"

        // clang-format on
    } else if (dir == 6) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_half_dslash_face_unpack_from_back_T_plus_half_half_v8_s8_18"

        // clang-format on
    } else if (dir == 7) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_half_dslash_face_unpack_from_forw_T_plus_half_half_v8_s8_18"

        // clang-format on
    } else {
        printf("Invalid dir for unpack boundary\n");
        exit(1);
    }
}

template <>
inline void tm_clov_face_finish_dir_minus<FPTYPE, VEC, SOA, COMPRESS12>(
    const FPTYPE *inbuf,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::SU3MatrixBlock *gBase,
    Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *oBase,
    const typename Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FullCloverBlock
        *clBase,
    const int gOffs[VEC],
    const int offs[VEC],
    const int hsprefdist,
    const int gprefdist,
    const int soprefdist,
    const int clprefdist,
    const FPTYPE beta,
    unsigned int mask,
    int dir) {
    if (dir == 0) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_half_dslash_face_unpack_from_back_X_minus_half_half_v8_s8_18"

        // clang-format on
    } else if (dir == 1) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_half_dslash_face_unpack_from_forw_X_minus_half_half_v8_s8_18"

        // clang-format on
    } else if (dir == 2) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_half_dslash_face_unpack_from_back_Y_minus_half_half_v8_s8_18"

        // clang-format on
    } else if (dir == 3) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_half_dslash_face_unpack_from_forw_Y_minus_half_half_v8_s8_18"

        // clang-format on
    } else if (dir == 4) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_half_dslash_face_unpack_from_back_Z_minus_half_half_v8_s8_18"

        // clang-format on
    } else if (dir == 5) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_half_dslash_face_unpack_from_forw_Z_minus_half_half_v8_s8_18"

        // clang-format on
    } else if (dir == 6) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_half_dslash_face_unpack_from_back_T_minus_half_half_v8_s8_18"

        // clang-format on
    } else if (dir == 7) {
        // clang-format off
        






#include "qphix/avx2/generated/tm_clov_half_dslash_face_unpack_from_forw_T_minus_half_half_v8_s8_18"

        // clang-format on
    } else {
        printf("Invalid dir for unpack boundary\n");
        exit(1);
    }
}

#endif // QPHIX_DO_COMMS
#undef FPTYPE
#undef VEC
#undef SOA
#undef COMPRESS12


