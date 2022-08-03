#include <stdio.h>

int main() {
  int nums[6] = {0, 0, 0, 0, 0, 0}, tmp;

  for (int i = 0; i < 10; i++) {
    scanf("%d", &tmp);
    nums[tmp - 1]++;
  }

  for (int i = 0; i < 6; i++) {
    printf("%d : %d\n", i + 1, nums[i]);
  }
}
