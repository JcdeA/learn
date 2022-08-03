#include <stdio.h>

int main() {
  int count, sum = 0, a;
  scanf("%d", &count);

  for (int i = 1; i <= count; i++) {
    scanf("%d", &a);
    sum += a;
  }
  printf("%.2f", (double)sum / (double)count);
}
