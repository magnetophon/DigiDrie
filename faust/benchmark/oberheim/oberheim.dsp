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

process = _, _, _ : oberheimF;
