#include <stdio.h>

int main() {
  double avgs[6] = {85.6, 79.5, 83.1, 80.0, 78.2, 75.0};
  double sum;
  int class1, class2;

  scanf("%d", &class1);
  scanf("%d", &class2);

  printf("%.1f", avgs[class1 - 1] + avgs[class2 - 1]);
}
