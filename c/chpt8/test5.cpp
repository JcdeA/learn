#include <stdio.h>

int main() {
  int inp;

  scanf("%d", &inp);

  for (int i = 1; i <= inp; i++) {

    for (int j = 1; j <= inp * 2 - 1 - (i * 2 - 1); j++) {
      printf(" ");
    }

    for (int k = 1; k < i * 2; k++) {
      printf("*");
    }

    printf("\n");
  }
}
