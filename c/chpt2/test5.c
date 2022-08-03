#include <stdio.h>

int main() {
  double inp;
  printf("yard? ");
  scanf("%lf", &inp);
  printf("%.1fyard = %.1fcm", inp, inp * 91.44);
}
