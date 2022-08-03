#include <stdio.h>

int main() {
  int inp, index = 0, n;
  scanf("%d", &inp);

  while (1) {
    n = inp * ++index;
    if (n >= 100) {
      break;
    }
    printf("%d ", n);
    if (n % 10 == 0) {
      break;
    }
  }
}
