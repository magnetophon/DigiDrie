import("stdfaust.lib");
process =
  (index2freq(fund)-(ma.SR/256)) / (ma.SR/8);
fund = os.lf_sawpos(440);
index2freq(index)        = ((index-index')*ma.SR) : ba.sAndH(abs(index-index')<0.5);
