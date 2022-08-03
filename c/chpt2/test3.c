#include <stdio.h>

int main() {
  int a;
  a = 50;

  double b;
  b = 100.12;

  printf("%.2f * %d = %.0f", b, a, a * b);
}
