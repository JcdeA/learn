#include <stdio.h>

int main() {
  int inp, a = 1;
  scanf("%d", &inp);

  for (int i = 1; i <= inp; i++) {
    for (int k = 1; k <= a; k++) {
      printf("# ");
    }
    a++;
    printf("\n");
  }

  a = inp - 1;
  for (int i = 1; i <= inp - 1; i++) {
    for (int j = 1; j <= inp - a; j++) {
      printf("  ");
    }

    for (int k = 1; k <= a; k++) {
      printf("# ");
    }
    a--;
    printf("\n");
  }
}
