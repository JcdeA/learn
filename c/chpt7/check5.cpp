#include <stdio.h>

int main() {
  int i, num, m3 = 0, m5 = 0;

  for (i = 1; i <= 10; i++) {

    scanf("%d", &num);
    if (num % 3 == 0) {
      m3++;
    }
    if (num % 5 == 0) {
      m5++;
    }
  }
  printf("Multiples of 3 : %d\n", m3);
  printf("Multiples of 5 : %d", m5);
}
