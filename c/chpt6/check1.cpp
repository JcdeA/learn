#include <stdio.h>

int main (){
  int input,sum = 0;
  int a = 1;
  scanf("%d",&input);

  while (a <=input) {
    sum = sum + a++;
  }
  printf("%d",sum);
}
