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
  // freq = 2*(10^(3*normFreq+1));
  K = 2.0*(Q - 0.707)/(10.0 - 0.707); // target.
  wd = 2*ma.PI*freq;
  T = 1/ma.SR;
  wa = (2/T)*tan(wd*T/2);
  g = wa*T/2;
  G = g/(1.0 + g);
  alpha = G;                    // target.
  B3 = (K - K*G)/(1 + g);       // target.
  B2 = -1/(1 + g);              // target.
  alpha0 = 1/(1 - K*G + K*G*G); // target.
};

process = _, _, _ : korg35LPF;
