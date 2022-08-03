#include <stdio.h>

int main() {
  int i, j;

  for (i = 0; i <= 4; i++) {
    for (j = 2; j <= 6; j++) {
      printf("%d ", i + j);
    }
    printf("\n");
  }
}
