#include <stdio.h>
#include <time.h>

int main() {
  int a = 0;
  time_t now;
  struct tm tt;
  time(&now);

  tt = *localtime(&now);
  a = tt.tm_year;

  a += tt.tm_mon;

  a += tt.tm_mday;

  printf("%d %d %d\n", 0, 121, 158);
}
