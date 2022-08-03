#include <stdio.h>

int main() {
  int cnt, a[20], tmp;
  scanf("%d", &cnt);
  for (int i = 0; i < cnt; i++) {
    scanf("%d", &a[i]);
  }
  for (int k = 0; k < cnt; k++) {
    for (int j = k; j < cnt; j++) {
      if (a[k] < a[j]) {
        tmp = a[k];
        a[k] = a[j];
        a[j] = tmp;
      }
    }
  }
  for (int i = 0; i < cnt; i++) {

    printf("%d\n", a[i]);
  }
}
