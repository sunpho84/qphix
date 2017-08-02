#pragma once

#include <qphix/dslash_utils.h>
#include <qphix/geometry.h>
#include <qphix/comm.h>

namespace QPhiX
{

template <typename FT, int veclen, int soalen, bool compress12>
class TMClovDslash
{

 public:
  typedef typename Geometry<FT, veclen, soalen, compress12>::SU3MatrixBlock
      SU3MatrixBlock;
  typedef typename Geometry<FT, veclen, soalen, compress12>::FourSpinorBlock
      FourSpinorBlock;
  typedef typename Geometry<FT, veclen, soalen, compress12>::TwoSpinorBlock
      TwoSpinorBlock;
  typedef typename Geometry<FT, veclen, soalen, compress12>::FullCloverBlock
      FullCloverBlock;
  typedef typename Geometry<FT, veclen, soalen, compress12>::CloverBlock
      CloverBlock;

  // Constructor
  TMClovDslash(Geometry<FT, veclen, soalen, compress12> *geom_,
               double t_boundary_,
               double dslash_aniso_s_,
               double dslash_aniso_t_,
               bool use_tbc_[4] = nullptr,
               double tbc_phases_[4][2] = nullptr,
               double const prec_mass_rho = 0.0);

  // Destructor
  ~TMClovDslash();

  // Apply the dslash operator,
  // which here will be A^-1 * D * psi,
  // with A^-1 = invclov
  void dslash(FourSpinorBlock *res,
              const FourSpinorBlock *psi,
              const SU3MatrixBlock *u,
              const FullCloverBlock *const invclov[2],
              int isign,
              int cb,
              int fl = 0);

  // Apply the A*chi-b*D*psi operator
  // w/ A = alpha 1 + c_SW T = clov,
  // passed (and suitably packed) externally
  // The twisted quark mass (plus any preconditioning msss) 
  // is applied via prec_mass_rho
  void dslashAChiMinusBDPsi(FourSpinorBlock *res,
                            const FourSpinorBlock *psi,
                            const FourSpinorBlock *chi,
                            const SU3MatrixBlock *u,
                            const CloverBlock *clov,
                            const double beta,
                            int isign,
                            int cb,
                            int fl = 0);

  /**
    Clover \f$ A \chi - b D \psi \f$ for the non-degenerate twisted mass
    case.

    Most aspects of this function are similar to \ref two_flav_dslash.
    Please first read the documentation there.

    This function will compute
    \f[
    \begin{pmatrix}
    \Psi_\mathrm u \\ \Psi_\mathrm d
    \end{pmatrix}
    :=
    \begin{pmatrix}
    A_\mathrm{uu} &
    \epsilon \\
    \epsilon &
    A_\mathrm{dd}
    \end{pmatrix}
    \begin{pmatrix}
    \chi_\mathrm u \\ \chi_\mathrm d
    \end{pmatrix}
    - b D
    \begin{pmatrix}
    \psi_\mathrm u \\ \psi_\mathrm d
    \end{pmatrix}
    \,.
    \f]

    In order to leverage the \ref dslashAChiMinusBDPsi implementation,
    this is rewritten as
    \f[
    \begin{pmatrix}
    \Psi_\mathrm u \\ \Psi_\mathrm d
    \end{pmatrix}
    :=
    \underbrace{
    \begin{pmatrix}
    A_\mathrm{uu} \chi_\mathrm u - b D \psi_\mathrm u \\
    A_\mathrm{dd} \chi_\mathrm d - b D \psi_\mathrm d
    \end{pmatrix}
    }_\text{achimdpsi}
    +
    \begin{pmatrix}
    \epsilon \chi_\mathrm d \\
    \epsilon \chi_\mathrm u
    \end{pmatrix}
    \,.
    \f]

    \param[in] chi Second spinor field \f$ \chi \f$.
    \param[in] clov Two flavor parts of the odd-odd term. The first index
    is the flavor index, the second index is for the heritian conjugation,
    just like \p clov of \ref dslashAChiMinusBDPsi or \p invclov of \ref
    two_flav_dslash.
    \param[in] beta The \f$ b \f$ (or \f$ \beta \f$) coefficient.
    \param[in] epsilon Twisted mass splitting \f$ \epsilon \f$ (or \f$
    \mu_\delta \f$).

    Other parameters are exactly like in \ref two_flav_dslash and are not
    explained again here.

    \author Martin Ueding <dev@martin-ueding.de>
    \author Bartosz Kostrzewa <bartosz_kostrzewa@fastmail.com>
    */
  void two_flav_AChiMinusBDPsi(FourSpinorBlock *const res[2],
                               const FourSpinorBlock *const chi[2],
                               const FourSpinorBlock *const psi[2],
                               const SU3MatrixBlock *u,
                               const CloverBlock *clov,
                               const double beta,
                               const double epsilon,
                               const int isign,
                               const int cb);

#ifdef __INTEL_COMPILER  
  void two_flav_AChiMinusBDPsi(FourSpinorBlock *const res[2],
                               FourSpinorBlock *const psi[2],
                               FourSpinorBlock *const chi[2],
                               const SU3MatrixBlock *u,
                               const CloverBlock *clov,
                               double beta,
                               double epsilon,
                               int isign,
                               int cb)
  {
    this->two_flav_AChiMinusBDPsi(res, 
                                  const_cast<const FourSpinorBlock * const *>(psi),
                                  const_cast<const FourSpinorBlock * const *>(chi),
                                  u, alpha, beta, epsilon, isign, cb); 
  }

  void two_flav_AChiMinusBDPsi(FourSpinorBlock * const res[2],
                               FourSpinorBlock * psi[2],
                               FourSpinorBlock * chi[2],
                               const SU3MatrixBlock *u,
                               const CloverBlock *clov,
                               double beta,
                               double epsilon,
                               int isign,
                               int cb)
  {
    this->two_flav_AChiMinusBDPsi(res, 
                                  const_cast<const FourSpinorBlock * const *>(psi),
                                  const_cast<const FourSpinorBlock * const *>(chi),
                                  u, alpha, beta, epsilon, isign, cb); 
  }
  
  void two_flav_AChiMinusBDPsi(FourSpinorBlock * const res[2],
                               FourSpinorBlock * psi[2],
                               const FourSpinorBlock * const chi[2],
                               const SU3MatrixBlock *u,
                               const CloverBlock *clov,
                               double beta,
                               double epsilon,
                               int isign,
                               int cb)
  {
    this->two_flav_AChiMinusBDPsi(res, 
                                  const_cast<const FourSpinorBlock * const *>(psi),
                                  const_cast<const FourSpinorBlock * const *>(chi),
                                  u, alpha, beta, epsilon, isign, cb);
  }
#endif // __INTEL_COMPILER workaround 

  void free(void *p);

  Geometry<FT, veclen, soalen, compress12> &getGeometry(void) { return (*s); }

 private:
  Geometry<FT, veclen, soalen, compress12> *s;
  Comms<FT, veclen, soalen, compress12> *comms;

  int log2veclen;
  int log2soalen;

  const int n_threads_per_core;
  const int By;
  const int Bz;
  const int NCores;
  const int Sy;
  const int Sz;
  const int PadXY;
  const int PadXYZ;
  const int MinCt;

  const double t_boundary;
  const double aniso_coeff_S;
  const double aniso_coeff_T;

  bool use_tbc[4] = {false, false, false, false};
  FT tbc_phases[4][2] = {{rep<FT, double>(1.0), rep<FT, double>(0.0)},
                         {rep<FT, double>(1.0), rep<FT, double>(0.0)},
                         {rep<FT, double>(1.0), rep<FT, double>(0.0)},
                         {rep<FT, double>(1.0), rep<FT, double>(0.0)}};

  bool amIPtMin;
  bool amIPtMax;

  Barrier *gBar;
  Barrier ***barriers;

  BlockPhase *block_info;
  int *tmpspc_all; // Space for YZ offsets etc

  // Masks for comms in X & Y
  unsigned int xbmask_x0_xodd[2];
  unsigned int xfmask_xn_xodd[2];
  unsigned int ybmask_y0;
  unsigned int yfmask_yn;

  double const prec_mass_rho;

  TMClovDslash(); // Hide Free Constructor

  void Dyz(int tid,
           const FourSpinorBlock *psi,
           FourSpinorBlock *res,
           const SU3MatrixBlock *u,
           const FullCloverBlock *invclov,
           bool const is_plus,
           int cb);

  void DyzAChiMinusBDPsi(int tid,
                         const FourSpinorBlock *psi,
                         const FourSpinorBlock *chi,
                         FourSpinorBlock *res,
                         const SU3MatrixBlock *u,
                         const CloverBlock *clov,
                         double beta,
                         bool const is_plus,
                         int cb,
                         int fl = 0);

  void DPsi(const SU3MatrixBlock *u,
            const FullCloverBlock *invclov,
            const FourSpinorBlock *psi_in,
            FourSpinorBlock *res_out,
            bool const is_plus,
            int cb);

  void DPsiAChiMinusBDPsi(const SU3MatrixBlock *u,
                          const CloverBlock *clov,
                          const FourSpinorBlock *psi_in,
                          const FourSpinorBlock *chi,
                          FourSpinorBlock *res_out,
                          double beta,
                          bool const is_plus,
                          int cb,
                          int fl = 0);

#ifdef QPHIX_DO_COMMS
  void packFaceDir(int tid,
                   const FourSpinorBlock *psi,
                   FT *res,
                   int cb,
                   int dir,
                   int fb,
                   bool const is_plus);

  void completeFaceDir(int tid,
                       const FT *psi,
                       FourSpinorBlock *res,
                       const SU3MatrixBlock *u,
                       const FullCloverBlock *invclov,
                       double beta,
                       int cb,
                       int dir,
                       int fb,
                       bool const is_plus);

  void completeFaceDirAChiMBDPsi(int tid,
                                 const FT *psi,
                                 FourSpinorBlock *res,
                                 const SU3MatrixBlock *u,
                                 const double beta,
                                 int cb,
                                 int dir,
                                 int fb,
                                 bool const is_plus);
#endif

}; // Class

} // Namespace

#include "qphix/tm_clov_dslash_body.h"

#ifdef QPHIX_DO_COMMS
#include "qphix/tm_clov_dslash_face.h"
#endif
