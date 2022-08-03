#include <stdio.h>

int main() {
  int a, b;
  int c, d;
  scanf("%d %d", &a, &b);
  scanf("%d %d", &c, &d);
  printf("%d", a > c && b > d);
}
