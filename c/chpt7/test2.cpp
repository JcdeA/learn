#include <stdio.h>

int main() {
  int x, y, i;

  scanf("%d", &x);
  scanf("%d", &y);

  if (x < y) {
    for (i = x; i <= y; i++) {
      printf("%d ", i);
    }
  } else if (x >= y) {

    for (i = y; i <= x; i++) {
      printf("%d ", i);
    }
  }
}
