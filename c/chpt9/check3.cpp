#include <stdio.h>

int main() {
  char c[10];

  for (int i = 0; i < 10; i++) {
    scanf(" %c", &c[i]);
  }

  printf("%c ", c[0]);
  printf("%c ", c[3]);
  printf("%c ", c[6]);
}
