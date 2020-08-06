import("stdfaust.lib");
process =
  8 * (fund - fund'): ba.sAndH(abs(fund-fund')<0.5) - 8 / 256;
fund = os.lf_sawpos(440);
index2freq(index)        = ((index-index')*ma.SR) : ba.sAndH(abs(index-index')<0.5);
