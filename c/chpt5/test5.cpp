#include <stdio.h>

int main() {
  int month;
  scanf("%d", &month);
  int months[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  printf("%d", months[month - 1]);
}
