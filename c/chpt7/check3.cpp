#include <stdio.h>

int main() {
  int i, inp;
  scanf("%d", &inp);

  for (i = 2; i <= inp; i = i + 2) {
    printf("%d ", i);
  }
}
