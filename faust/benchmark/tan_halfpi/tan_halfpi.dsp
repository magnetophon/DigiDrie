import("stdfaust.lib");

g(x) = tan(ma.PI * x);

process = _ * 0.5 : max(0) : min(0.498)
  : g;
