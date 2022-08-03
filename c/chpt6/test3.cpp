#include <stdio.h>

int main() {
  int inp;
  int count = 0, sum = 0;

  while (1) {

    scanf("%d", &inp);

    if (inp > 100 || inp < 0) {
      break;
    }

    sum = sum + inp;

    count++;
  }

  printf("sum : %d\n", sum);

  printf("avg : %.1f\n", (double)sum / (double)count);
}
