#include <stdio.h>

int main() {
  int base, height;
  char cont;

  while (1) {
    printf("Base = ");
    scanf("%d", &base);

    printf("Height = ");
    scanf("%d", &height);

    printf("Triangle width = %.1f\n", base * height * 0.5);

    printf("Continue? ");
    scanf(" %c", &cont);

    if (!(cont == 'y' || cont == 'Y')) {
      break;
    }
  }
}
