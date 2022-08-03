#include <stdio.h>

int main() {
  int a[10];
  scanf("%d", &a[0]);
  scanf("%d", &a[1]);

  for (int i = 0; i < 8; i++) {
    a[i + 2] = (a[i] + a[i + 1]) % 10;
  }

  for (int i = 0; i < 10; i++) {
    printf("%d ", a[i]);
  }
}
