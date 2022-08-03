#include <stdio.h>

int main() {
  int cnt, i, grade, total = 0;
  double avg;
  scanf("%d", &cnt);

  for (i = 1; i <= cnt; i++) {
    scanf("%d", &grade);
    total += grade;
  }
  avg = (double)total / (double)cnt;

  printf("avg : %.1f\n", avg);

  printf((avg >= 80) ? "pass" : "fail");
}
