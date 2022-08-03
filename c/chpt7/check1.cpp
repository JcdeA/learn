#include <stdio.h>

int main() {
  char a;
  int i = 0;
  scanf(" %c", &a);

  while (i < 20) {
    printf("%c", a);
    i++;
  }
}
