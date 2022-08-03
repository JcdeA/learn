#include <stdio.h>

int main() {
  int a[100];
  int cnt = 3, tmp;
  a[0] = 100;
  scanf("%d", &a[1]);

  for (int i = 2; i < 100; i++) {
    a[i] = a[i - 2] - a[i - 1];
    if (a[i] < 0) {
      break;
    }
    cnt++;
  }
  for (int i = 0; i < cnt; i++) {
    printf("%d ", a[i]);
  }
}
