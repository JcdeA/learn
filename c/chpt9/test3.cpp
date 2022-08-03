#include <stdio.h>

int main() {
  int a[10], sum1 = 0, sum2 = 0;

  for (int i = 0; i < 10; i++) {
    scanf("%d", &a[i]);
  }

  for (int i = 0; i < 10; i = i + 2) {
    sum1 += a[i];
  }
  for (int i = 1; i < 10; i = i + 2) {
    sum2 += a[i];
  }
  printf("odd : %d\n", sum1);
  printf("even : %d", sum2);
}
