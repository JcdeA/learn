#include <stdio.h>

int main() {
  int inp, index = 0;
  scanf("%d", &inp);

  while (index < inp) {
    printf("%d ", ++index);
  }
}
