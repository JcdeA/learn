#include <stdio.h>

int main() {
  int inp;
  int count = 1, sum = 0;

  while (1) {

    scanf("%d", &inp);
    sum = sum + inp;

    if (inp >= 100) {
      break;
    }

    count++;
  }
  printf("%d\n", sum);

  printf("%.1f\n", (double)sum / (double)count);

  return 0;
}
