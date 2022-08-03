#include <stdio.h>

int main() {
  int input = 0, k = 0;
  int a = 1;
  char c = 'A';

  scanf("%d", &input);
  for (int k = input; k > 0; k--) {
    for (int j = 1; j <= k; j++) {
      printf("%d ", a++);
    }

    for (int j = 1; j <= input - k + 1; j++) {
      printf("%c ", c++);
    }
    printf("\n");
  }
}
