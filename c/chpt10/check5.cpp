#include <stdio.h>

int main() {
  int a[2][4], b[2][4];

  printf("first array\n");
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 4; j++) {
      scanf("%d", &a[i][j]);
    }
  }
  printf("second array\n");
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 4; j++) {
      scanf("%d", &b[i][j]);
    }
  }

  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 4; j++) {
      printf("%d ", a[i][j] * b[i][j]);
    }
    printf("\n");
  }
}
