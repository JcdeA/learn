#include <stdio.h>

int main() {
  int a[10], max1, min2;

  for (int i = 0; i < 10; i++) {
    scanf("%d", &a[i]);
  }

  max1 = 0;
  min2 = 1000;
  for (int i = 0; i < 10; i++) {
    if (a[i] <= 99 && a[i] > max1) {
      max1 = a[i];
    }
  }

  for (int i = 0; i < 10; i++) {
    if (99 < a[i] && a[i] < min2) {
      min2 = a[i];
    }
  }
  if (max1 == 0) {
    max1 = 100;
  }
  if (min2 == 1000) {
    min2 = 100;
  }
  printf("%d ", max1);
  printf("%d", min2);
}
