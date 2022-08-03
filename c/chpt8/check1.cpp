#include <stdio.h>

int main() {
  int n, i = 1, sum = 0;
  scanf("%d", &n);

  while (1) {
    if (sum >= n) {
      break;
    }
    sum += i;
    i = i += 2;
  }
  printf("%d\n", (i - 1) / 2);
  printf("%d", sum);
}
