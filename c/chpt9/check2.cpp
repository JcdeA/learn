#include <stdio.h>

int main() {
  int c[10];

  for (int i = 0; i < 10; i++) {
    c[i] = i + 1;
  }

  for (int i = 0; i < 10; i++) {
    printf("%d ", c[i]);
  }
}
