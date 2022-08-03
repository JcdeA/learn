#include <stdio.h>

int main() {
  int a[100], tmp, cnt = 0;
  for (int i = 0; i < 100; i++) {
    scanf("%d", &tmp);
    if (tmp == 0) {
      break;
    }
    a[i] = tmp;
    cnt++;
  }
  printf("%d\n", cnt);
  for (int i = 0; i < cnt; i++) {
    if (a[i] % 2 == 0) {
      printf("%d ", a[i] / 2);
    } else {
      printf("%d ", a[i] * 2);
    }
  }
}
