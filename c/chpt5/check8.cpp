#include <stdio.h>

int main() {
  double grade;
  scanf("%lf", &grade);

  switch ((int)grade) {
  case 4:
    printf("scholarship");
    break;
  case 3:
    printf("next semester");
    break;
  case 2:
    printf("seasonal semester");
    break;
  case 1:
    printf("retake");
    break;
  }
  return 0;
}
