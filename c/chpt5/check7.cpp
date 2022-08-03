#include <stdio.h>

int main() {
  char grade;
  scanf("%s", &grade);
  if (grade == 'A') {
    printf("Excellent");

  } else if (grade == 'B') {
    printf("Good");
  } else if (grade == 'C') {

    printf("Usually");
  } else if (grade == 'D') {
    printf("Effort");
  } else if (grade == 'F') {
    printf("Failure");
  } else {
    printf("error");
  }
}
