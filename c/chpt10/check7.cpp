#include <stdio.h>

int main() {
  int a[5][5];
  for (int i = 0; i < 5; i++) {
    a[0][i] = 1;
    a[i][0] = 1;
  }
  a[1][0] = 1;
  for (int i = 1; i < 5; i++) {
    for (int k = 1; k < 5; k++) {
      a[i][k] = a[i - 1][k] + a[i][k - 1];
    }
  }

  for (int i = 0; i < 5; i++) {
    for (int k = 0; k < 5; k++) {
      printf("%d ", a[i][k]);
    }
    printf("\n");
  }
}
