#include <stdio.h>

int main() {
  int weight, height;
  scanf("%d %d", &height, &weight);

  printf("%d\n", weight + 100 - height);
  if ((weight + 100 - height) > 0) {
    printf("Obesity");
  }
}
