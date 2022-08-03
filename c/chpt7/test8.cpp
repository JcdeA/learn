#include <stdio.h>

int main() {
  int w, h;

  scanf("%d", &w);
  scanf("%d", &h);

  for (int i = 1; i <= w; i++) {
    for (int j = 1; j <= h; j++) {
      printf("%d ", i * j);
    }
    printf("\n");
  }
}
