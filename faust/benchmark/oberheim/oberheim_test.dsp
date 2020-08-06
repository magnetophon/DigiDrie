declare oberheim author "Eric Tarr";
declare oberheim license "MIT-style STK-4.3 license";

import("stdfaust.lib");

oberheimF(freq,Q) = _<:(s1,s2,ybsf,ybpf,yhpf,ylpf) : !,!,_,_,_,_
letrec{
  's1 = _-s2:_-(s1*FBs1):_*alpha0:_*g<:_,(_+s1:ef.cubicnl(0.0,0)):>_;
  's2 = _-s2:_-(s1*FBs1):_*alpha0:_*g:_+s1:ef.cubicnl(0.0,0):_*g*2:_+s2;
  // Compute the BSF, BPF, HPF, LPF outputs
  'ybsf = _-s2:_-(s1*FBs1):_*alpha0<:(_*g:_+s1:ef.cubicnl(0.0,0):_*g:_+s2),_:>_;
  'ybpf = _-s2:_-(s1*FBs1):_*alpha0:_*g:_+s1:ef.cubicnl(0.0,0);
  'yhpf = _-s2:_-(s1*FBs1):_*alpha0;
  'ylpf = _-s2:_-(s1*FBs1):_*alpha0:_*g :_+s1:ef.cubicnl(0.0,0):_*g:_+s2;
}
with{
  wd = 2*ma.PI*freq;
  T = 1/ma.SR;
  wa = (2/T)*tan(wd*T/2);
  g = wa*T/2;                   // target.
  R = 1/(2*Q);
  FBs1 = (2*R+g);               // target.
  alpha0 = 1/(1 + 2*R*g + g*g); // target.
};

oberheimF_approx(freq,Q) = _<:(s1,s2,ybsf,ybpf,yhpf,ylpf) : !,!,_,_,_,_
letrec{
  's1 = _-s2:_-(s1*FBs1):_*alpha0:_*g<:_,(_+s1:ef.cubicnl(0.0,0)):>_;
  's2 = _-s2:_-(s1*FBs1):_*alpha0:_*g:_+s1:ef.cubicnl(0.0,0):_*g*2:_+s2;
  // Compute the BSF, BPF, HPF, LPF outputs
  'ybsf = _-s2:_-(s1*FBs1):_*alpha0<:(_*g:_+s1:ef.cubicnl(0.0,0):_*g:_+s2),_:>_;
  'ybpf = _-s2:_-(s1*FBs1):_*alpha0:_*g:_+s1:ef.cubicnl(0.0,0);
  'yhpf = _-s2:_-(s1*FBs1):_*alpha0;
  'ylpf = _-s2:_-(s1*FBs1):_*alpha0:_*g :_+s1:ef.cubicnl(0.0,0):_*g:_+s2;
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

  g = tan_halfpi_approx(freq / ma.SR);
  R = 1/(2*Q);
  FBs1 = (2*R+g);
  alpha0 = 1/(1 + 2*R*g + g*g);
};

freq = hslider("normFreq", 124, -12, 124, 1e-5) : ba.pianokey2hz : min(20000);
Q = hslider("Q", 0.1, 0.1, 10, 1e-5);

process = _ <:
  (oberheimF(freq, Q)        : !, !, !, _),
  (oberheimF_approx(freq, Q) : !, !, !, _);
