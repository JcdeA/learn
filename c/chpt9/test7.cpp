#include <stdio.h>

int main() {
  int a[100], tmp, max = 0, min = 0, index = 0;

  for (int i = 0; i < 100; i++) {
    scanf("%d", &tmp);
    if (tmp == 999) {
      break;
    }
    a[i] = tmp;
    index++;
  }
  max = a[0];
  min = a[0];

  for (int i = 0; i < index; i++) {
    if (a[i] > max) {
      max = a[i];
    }
    if (a[i] < min) {
      min = a[i];
    }
  }
  printf("max : %d\n", max);
  printf("min : %d", min);
}
