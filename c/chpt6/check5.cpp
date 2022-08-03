#include <stdio.h>

int main() {
  int inp;

  while (1) {
    scanf("%d", &inp);
    if (inp % 3 == 0) {
      printf("%d\n", inp / 3);
    }
    if (inp == -1) {
      break;
    }
  }
}
