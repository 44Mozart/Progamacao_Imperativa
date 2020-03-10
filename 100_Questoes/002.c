#include <stdio.h>

int main () {
  int i = 0, soma = 0,n;
  float media;
  scanf("%d",&n);
  while(n != 0){
    soma = soma + n;
    scanf("%d",&n);
    i++;
  }
  media = soma/i;
  printf("A media e: %f\n", media);
  return 0;
}
