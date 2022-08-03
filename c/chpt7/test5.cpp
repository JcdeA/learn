#include <stdio.h>

int main() {
  int a, even = 0;

  for (int i = 1; i <= 10; i++) {
    scanf("%d", &a);
    if (a % 2 == 0) {
      even++;
    }
  }
  printf("even : %d\n", even);
  printf("odd : %d", 10 - even);
}
