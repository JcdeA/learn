#include <stdio.h>

int main() {
  int inp;
  int count = 0;

  while (1) {

    scanf("%d", &inp);

    if (inp == 0) {
      break;
    }
    if (inp % 3 * inp % 5 != 0) {
      count++;
    }
  }
  printf("%d", count);
}
