
#include <stdio.h>

int main() {
  int nums[11] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, tmp, index = 0;

  for (int i = 0; i < 100; i++) {
    scanf("%d", &tmp);
    if (tmp == 0) {
      break;
    }
    nums[tmp / 10]++;
    index++;
  }

  for (int i = 10; i >= 0; i--) {
    if (nums[i] != 0) {
      printf("%d : %d person\n", (i)*10, nums[i]);
    }
  }
}
