import("stdfaust.lib");

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

process = _ * 0.5 : max(0) : min(0.498)
  : tan_halfpi_approx;
