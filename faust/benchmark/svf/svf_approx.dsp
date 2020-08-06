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

// A is only used for bell, ls, hs.
svf = environment {
        svf(T,F,Q,G) = tick ~ (_,_) : !,!,_,_,_ : si.dot(3, mix)
        with {
                tick(ic1eq, ic2eq, v0) =
                2*v1 - ic1eq,
                2*v2 - ic2eq,
                v0, v1, v2
                with {
                        v1 = ic1eq + g *(v0-ic2eq) : /(1 + g*(g+k));
                        v2 = ic2eq + g * v1;
                };
                A = pow(10.0, G / 40.0);
                g = tan_halfpi_approx(F / ma.SR) : case {
                        (7) => /(sqrt(A));
                        (8) => *(sqrt(A));
                        (t) => _;
                } (T);
                k = case {
                        (6) => 1/(Q*A);
                        (t) => 1/Q;
                } (T);
                mix = case {
                        (0) => 0, 0, 1;
                        (1) => 0, 1, 0;
                        (2) => 1, -k, -1;
                        (3) => 1, -k, 0;
                        (4) => 1, -k, -2;
                        (5) => 1, -2*k, 0;
                        (6) => 1, k*(A*A-1), 0;
                        (7) => 1, k*(A-1), A*A-1;
                        (8) => A*A, k*(1-A)*A, 1-A*A;
                } (T);
        };
        lp(f,q)		= svf(0, f,q,0);
        bp(f,q)		= svf(1, f,q,0);
        hp(f,q)		= svf(2, f,q,0);
        notch(f,q)	= svf(3, f,q,0);
        peak(f,q)	= svf(4, f,q,0);
        ap(f,q)		= svf(5, f,q,0);
        bell(f,q,g)	= svf(6, f,q,g);
        ls(f,q,g)	= svf(7, f,q,g);
        hs(f,q,g)	= svf(8, f,q,g);
};

process = _, _, _ : svf.lp;
