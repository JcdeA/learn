#include <stdio.h>

int main() {
  char gender;
  int age;

  scanf("%s %d", &gender, &age);

  if (gender == 'M' && age >= 18) {
    printf("MAN");
  } else if (gender == 'M') {
    printf("BOY");
  }

  if (gender == 'F' && age > 18) {
    printf("WOMAN");
  } else if (gender == 'F') {
    printf("GIRL");
  }
}
