#include <stdio.h>

int main(){
  int n,max = 0;
  scanf("%d",&n);
  while (n!= 0){
    if (n > max) max = n;
    scanf("%d",&n);
  }
  printf("O maior e: %d\n", max);
  return 0;
}
  
