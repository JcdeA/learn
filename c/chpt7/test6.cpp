#include <stdio.h>

int main() {
  int a, b, sum = 0, cnt = 0;
  scanf("%d", &a);
  scanf("%d", &b);

  if (a < b) {
    for (int i = a; i <= b; i++) {
      if (i % 3 == 0 | i % 5 == 0) {
        sum += i;
        cnt++;
      }
    }
  } else {
    for (int i = b; i <= a; i++) {
      if (i % 3 == 0 | i % 5 == 0) {
        sum += i;
        cnt++;
      }
    }
  }
  printf("sum : %d\n", sum);
  printf("avg : %.1f", (double)sum / (double)cnt);
}
