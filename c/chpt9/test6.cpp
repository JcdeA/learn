#include <stdio.h>
int main() {
  char a[6] = {'J', 'U', 'N', 'G', 'O', 'L'}, c;
  scanf(" %c", &c);

  for (int i = 0; i < 6; i++) {
    if (a[i] == c) {
      printf("%d", i);
      return 0;
    }
  }
  printf("none");
}
