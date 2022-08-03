#include <stdio.h>

int main() {
  int tmp;
  int a[10];

  for (int k = 0; k < 10; k++) {
    scanf("%d", &a[k]);
  }

  for (int i = 0; i < 10; i++) {
    for (int j = i; j < 10; j++) {
      if (a[i] < a[j]) {
        tmp = a[i];
        a[i] = a[j];
        a[j] = tmp;
      }
    }
  }
  for (int k = 0; k < 10; k++) {
    printf("%d ", a[k]);
  }
}
