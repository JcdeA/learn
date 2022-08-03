#include <stdio.h>

int main() {
  int a[100], index = 0, tmp;

  for (int i = 0; i < 100; i++) {
    scanf("%d", &tmp);
    if (tmp == -1)
      break;

    a[i] = tmp;
    index++;
  }
  if (index > 3) {

    printf("%d ", a[index - 3]);
    printf("%d ", a[index - 2]);
    printf("%d", a[index - 1]);
  } else {
    for (int i = 0; i < index; i++) {
      printf("%d ", a[i]);
    }
  }
}
