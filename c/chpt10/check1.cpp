#include <stdio.h>

int main() {
  char a[100], tmp, count[100];
  int iter = 0;

  for (int i = 0; i < 100; i++) {
    count[i] = 0;
  }

  for (int i = 0; i < 100; i++) {
    scanf(" %c", &tmp);
    if (65 > (int)tmp || (int)tmp > 90) {
      break;
    }
    a[i] = tmp;
    iter++;
  }

  for (int i = 0; i < iter; i++) {
    count[(int)a[i] - 65] = count[(int)a[i] - 65] + 1;
  }
  for (int i = 0; i < 100; i++) {
    if (count[i] > 0) {

      printf("%c : %d\n", (char)(i + 65), count[i]);
    }
  }
}
