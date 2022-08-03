#include <stdio.h>

int main () {
  double a,b;
  
  scanf("%lf %lf",&a,&b);

  int c = (int)a*(int)b;
  printf("%d %d", (int)(a*b), c);


}
