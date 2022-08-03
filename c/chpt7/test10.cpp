#include <stdio.h>

int main() {
  int w, h;

  scanf("%d", &w);
  scanf("%d", &h);

  if (w > h) {

    for (int j = 1; j <= 9; j++) {
      for (int i = w; i >= h; i--) {
        printf("%d * %d = %2d   ", i, j, i * j);
      }
      printf("\n");
    }
  } else {
    printf("hello");
    for (int j = 1; j <= 9; j++) {
      for (int i = w; i <= h; i++) {
        printf("%d * %d = %2d   ", i, j, i * j);
      }
      printf("\n");
    }
  }
}
