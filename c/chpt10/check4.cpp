#include <stdio.h>

int main() {
  int a[15] = {5, 8, 10, 6, 4, 11, 20, 1, 13, 2, 7, 9, 14, 22, 3};
  for (int i = 0; i < 3; i++) {
    for (int k = 0; k < 5; k++) {
      printf("%2d   ", a[i * 5 + k]);
    }
    printf("\n");
  }
}
