
#include <math.h>
#include <stdio.h>

int main() {
  int p = 21500;
  double r;
    if (scanf("%lf", &r) == 1 && r>=0) {
      double v = (4.0 / 3.0) * M_PI * pow(r, 3.0);
      double m = p * v;
      double result = round(m);
      printf("%.0lf", result);
    } else {
      printf("n/a");
      return 0;
    }
}
