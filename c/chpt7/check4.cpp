#include <stdio.h>

int main() {
  int inp, i, sum = 0;

  scanf("%d", &inp);

  for (i = inp; i <= 100; i++) {
    sum += i;
  }
  printf("%d", sum);
}
