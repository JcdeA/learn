#include <stdio.h>

int main() {
  int inp, a = 1;
  scanf("%d", &inp);

  for (int i = 1; i <= inp; i++) {
    for (int k = 1; k <= inp; k++) {
      printf("%d ", a % 10);
      a = a + 2;
    }
    printf("\n");
  }
}
