#include <stdio.h>

int main() {
  int n, spaces = 1;
  scanf("%d", &n);
  for (int i = n; i >= 1; i--) {
    for (int j = 1; j <= i; j++) {
      printf("*");
    }
    printf("\n");

    for (int k = 1; k <= spaces; k++) {

      printf(" ");
    }
    spaces++;
  }
}
