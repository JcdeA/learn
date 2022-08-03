#include <stdio.h>

int main() {
  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);
  printf("%.1f", ((double)a + (double)b + (double)c) / 3);
}
