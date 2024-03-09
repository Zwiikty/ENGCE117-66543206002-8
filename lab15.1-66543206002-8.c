#include <stdio.h>

double f(double x);
double RootOfFunction(double xl, double xr, double epsilon);

int main() {
  double root;
  root = RootOfFunction(-1, 10, 0.1);
  printf("Root = %.1f\n", root);
  return 0;
}

double f(double x) {
  return 2 * x - 5;
}

double RootOfFunction(double xl, double xr, double epsilon) {
  double xm, fxm;
  while (xr - xl > epsilon) {
    xm = (xl + xr) / 2;
    printf("%.1f %.1f %.1f\n", xl, xm, xr);
    fxm = f(xm);
    if (f(xm) * f(xl) < 0) {
      xr = xm;
    }  else {
      xl = xm;
    }
  }
  printf("%.1f %.1f %.1f\n", xl, xm, xr);
  return xm;
}
