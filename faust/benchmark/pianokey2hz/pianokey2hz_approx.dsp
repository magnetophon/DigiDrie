/**
Approximation of pianokey2hz. Only valid when pk is in [0, 127].
*/
pianokey2hz_approx(pk) = (
      61304.474645971386 +
       4021.190563709272 * pk +
     -6.8775394957030995 * pk * pk +
      1.5565305044327298 * pk * pk * pk
  ) / (
      2632.0856392357314 +
      -46.53699865473704 * pk +
     0.28675342677933124 * pk * pk +
    -0.0006128269124905047 * pk * pk * pk
  );

process = pianokey2hz_approx;
