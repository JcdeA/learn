#include <stdio.h>

int main() {
  int inp, index = 1;
  scanf("%d", &inp);
  for (int k = 0; k < inp; k++) {
    for (int j = 1; j <= k; j++) {

      printf("  ");
    }

    for (int i = 1; i <= inp - k; i++) {
      printf("%d ", index);
      index++;
    }
    printf("\n");
  }
}
