#include <stdio.h>

int main() {
  int weight;
  scanf("%d", &weight);

  if (weight <= 50.8) {
    printf("Flyweight");
  } else if (weight <= 61.23) {
    printf("Lightweight");
  } else if (weight <= 72.57) {
    printf("Middleweight");

  } else if (weight <= 88.45) {
    printf("Cruiserweight");
  } else {
    printf("Heavyweight");
  }
}
