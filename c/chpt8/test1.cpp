#include <stdio.h>

int main() {
  int a, count = 0, sum = 0;
  for (int i = 1; i <= 20; i++) {
    scanf("%d", &a);
    if (a == 0) {
      break;
    }
    sum += a;
    count++;
  }
  printf("%d\n", sum);
  printf("%d", sum / count);
}
