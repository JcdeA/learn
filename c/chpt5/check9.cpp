#include <stdio.h>

int main() {
  int a, b, c;
  int min;
  scanf("%d %d %d", &a, &b, &c);

  min = (a < b) ? a : b;

  min = (min < c) ? min : c;

  printf("%d", min);
}
