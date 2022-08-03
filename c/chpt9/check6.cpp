#include <stdio.h>

int main() {
  int a[10], min;

  for (int i = 0; i < 10; i++) {
    scanf("%d", &a[i]);
  }
  min = a[0];

  for (int k = 0; k < 10; k++) {
    if (a[k] < min) {
      min = a[k];
    }
  }
  printf("%d", min);
}
