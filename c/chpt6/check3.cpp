#include <stdio.h>
 
int is_positive(int num) { return num > 0; }
 
int main() {
  int inp;
 
  printf("number? ");
  scanf("%d", &inp);
 
  while (inp != 0) {
 
    if (is_positive(inp)) {
      printf("positive integer\n");
    } else {
      printf("negative number\n");
    }
 
    printf("number? ");
    scanf("%d", &inp);
  }
 
  return 0;
}
