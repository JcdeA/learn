#include <stdio.h>

int main() {
  int sum = 0, i, inp;

  scanf("%d", &inp);
  if (inp < 5) {
    printf("0");
    return 0;
  }
  for (i = 1; i * 5 <= inp; i++) {
    sum += i * 5;
  }
  printf("%d", sum);
}
