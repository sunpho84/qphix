#pragma once

#include <qphix/geometry.h>

namespace QPhiX
{

template <typename FT, int veclen, int soalen, bool compress>
class EvenOddLinearOperator
{
 public:
  virtual ~EvenOddLinearOperator(){};

  typedef typename Geometry<FT, veclen, soalen, compress>::FourSpinorBlock
      FourSpinorBlock;
  virtual void operator()(FourSpinorBlock *res,
                          const FourSpinorBlock *in,
                          int isign,
                          int target_cb = 1) const = 0;
  virtual Geometry<FT, veclen, soalen, compress> &getGeometry(void) = 0;
};
}

