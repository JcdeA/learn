#include <stdio.h>

int main() {
  int input = 0, k = 0;
  char a = 'A';
  scanf("%d", &input);
  for (int k = input; k >= 0; k--) {
    for (int j = 1; j <= k; j++) {
      printf("%c", a++);
    }
    printf("\n");
  }
}
