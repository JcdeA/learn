#include <stdio.h>

int main() {
  int a[100], tmp, count = 0;

  for (int i = 0; i < 100; i++) {
    scanf("%d", &tmp);
    if (tmp != 0) {
      a[i] = tmp;
      count++;
    } else {
      break;
    }
  }
  for (int i = count - 1; i >= 0; i--) {
    printf("%d ", a[i]);
  }
}
