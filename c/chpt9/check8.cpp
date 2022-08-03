#include <stdio.h>

int main() {
  int a[10], sum = 0;
  double avg = 0;

  for (int i = 0; i < 10; i++) {
    scanf("%d", &a[i]);
  }

  for (int i = 1; i < 10; i = i + 2) {
    sum += a[i];
  }

  for (int i = 0; i < 10; i += 2) {
    avg += (double)a[i];
  }

  printf("sum : %d\n", sum);
  printf("avg : %.1f", avg / (double)5);
}
