#include <stdio.h>

int main() {
  int input = 0, k = 0;
  int a = 0;
  char c = 'A';

  scanf("%d", &input);
  for (int k = input; k > 0; k--) {
    for (int j = 1; j <= k; j++) {
      printf("%c ", c++);
    }
    for (int j = 1; j <= input - k; j++) {
      printf("%d ", a++);
    }

    printf("\n");
  }
}
