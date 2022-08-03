#include <stdio.h>

int main() {
  int odd = 0, even = 0;
  int inp;
  while (1) {
    scanf("%d", &inp);
    if (inp == 0) {
      break;
    }

    (inp % 2 == 0) ? even++ : odd++;
  }
  printf("odd : %d\n", odd);
  printf("even : %d", even);
}
