#include <stdio.h>

int main() {
  int a[5][4], success = 0;
  for (int i = 0; i < 5; i++) {
    for (int k = 0; k < 4; k++) {
      scanf("%d", &a[i][k]);
    }
  }

  for (int i = 0; i < 5; i++) {
    int tmp = 0;
    for (int k = 0; k < 4; k++) {
      tmp += a[i][k];
    }
    if (tmp / 4 >= 80) {
      printf("pass\n");
      success++;
    } else {
      printf("fail\n");
    }
  }
  printf("Successful : %d", success);
}
