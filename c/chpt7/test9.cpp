#include <stdio.h>

int main() {
  int w;

  scanf("%d", &w);

  for (int i = 1; i <= w; i++) {
    for (int j = 1; j <= w; j++) {
      printf("(%d, %d) ", i, j);
    }
    printf("\n");
  }
}
