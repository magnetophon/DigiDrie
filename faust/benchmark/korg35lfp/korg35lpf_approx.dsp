declare korg35LPF author "Eric Tarr";
declare korg35LPF license "MIT-style STK-4.3 license";

import("stdfaust.lib");

korg35LPF(freq,Q) = _ <: (s1,s2,s3,y) : !,!,!,_
letrec{
  's1 = _-s1:_*(alpha*2):_+s1;
  's2 = _-s1:_*alpha:_+s1:_+(s3*B3):_+(s2*B2):_*alpha0:_-s3:_*alpha:_+s3:_*K:_-s2:_*(alpha*2):_+s2;
  's3 = _-s1:_*alpha:_+s1:_+(s3*B3):_+(s2*B2):_*alpha0:_-s3:_*(alpha*2):_+s3;
  'y = _-s1:_*alpha:_+s1:_+(s3*B3):_+(s2*B2) :_*alpha0:_-s3:_*alpha:_+s3;
}
with{
  // Only valid in [0, 0.498). 0.5 is nyquist frequency.
  tan_halfpi_approx(x) = (
    4.189308700355015e-05 +
       4.290568649086532 * x +
      -2.657498976290899 * x * x +
     -1.5163927048819992 * x * x * x
  ) / (
      1.3667229106607917 +
     -0.8644224895636948 * x +
      -4.828883069406347 * x * x +
       2.181672945531366 * x * x * x
  );

  // freq = 2*(10^(3*normFreq+1));
  K = 2.0*(Q - 0.707)/(10.0 - 0.707);
  g = tan_halfpi_approx(freq / ma.SR);
  G = g/(1.0 + g);
  alpha = G;
  B3 = (K - K*G)/(1 + g);
  B2 = -1/(1 + g);
  alpha0 = 1/(1 - K*G + K*G*G);
};

process = _, _, _ : korg35LPF;
