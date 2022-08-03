#include <stdio.h>

int main() {
  double a[6], sum = 0;

  for (int i = 0; i < 6; i++) {
    scanf("%lf", &a[i]);
  }
  for (int i = 0; i < 6; i++) {
    sum = sum + a[i];
  }
  printf("%.1f", sum / 6.0);
}
