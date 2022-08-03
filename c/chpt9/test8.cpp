#include <stdio.h>

int main() {
  int a[100], tmp, cnt = 0, cnt5 = 0, sum = 0;
  for (int i = 0; i < 100; i++) {
    scanf("%d", &tmp);
    if (tmp == 0) {
      break;
    }
    a[i] = tmp;
    cnt++;
  }
  for (int i = 0; i < cnt; i++) {
    if (a[i] % 5 == 0) {
      sum += a[i];
      cnt5++;
    }
  }
  printf("Multiples of 5 : %d\n", cnt5);
  printf("sum : %d\n", sum);
  printf("avg : %.1f", (double)sum / (double)cnt5);
}
