#include <stdio.h>

int main() {
  char a[10];

  for (int i = 0; i < 10; i++) {
    scanf(" %c", &a[i]);
  }

  for (int k = 9; k >= 0; k--) {
    printf("%c ", a[k]);
  }
}
