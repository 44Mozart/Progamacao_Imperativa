#include <stdio.h>

int main () {
  int max = 0, semax = 0, i, n,j;
  scanf("%d", &n);
  while(n != 0){
    if (n > max) {
      semax = max;
      max = n;
    }
    else if (semax > max) {
      j = semax;
      semax = max;
      max = j;
    }
    scanf("%d",&n);
  }
  printf("O segundo maior e: %d\n", semax);
  return 0;
}
