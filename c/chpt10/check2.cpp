#include <stdio.h>

int main() {
  int a[100], count[10], tmp, iter = 0;

  for (int i = 0; i < 100; i++) {
    scanf("%d", &tmp);
    if (tmp == 0) {
      break;
    }
    a[i] = tmp;
    iter++;
  }
  for (int i = 0; i < 10; i++) {
    count[i] = 0;
  }

  for (int i = 0; i < iter; i++) {
    int q = a[i] / 10;
    count[q] = count[q] + 1;
  }

  for (int i = 0; i < 10; i++) {
    if (count[i] != 0) {
      printf("%d : %d\n", i, count[i]);
    }
  }
}
