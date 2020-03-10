#include <stdio.h>
#include <string.h>


--------------- EXERCICIO 2 -------------
void swapM(int *x, int *y){
  int t = *x;
  *x  = *y;
  *y = t;
}
int main(){
  int x = 10, y = 5;
  swapM (&x, &y);
  printf ("%d %d\n", x, y);
  return 0;
}

--------------- EXERCICIO 3 -------------

void swap (int v[], int i, int j){
  int t;
  t = v[i];
  v[i] = v[j];
  v[j] = t;
}
int main(){
  int v[2] = {10,5};
  int i = 0, j = 1;
  swap (v,i,j);
  printf ("%d %d\n", v[i], v[j]);
  return 0;
}

--------------- EXERCICIO 4 -------------

int soma (int v[], int N){
  int i,s = 0;
  for (i = 0; i < N; i++){
    s += v[i];
  }
  return s;
}

int main(){
  int v[4] = {1,2,3,4};
  printf ("%d\n",soma(v,4));
  return 0;
}

--------------- EXERCICIO 5 -------------

int maximum (int v[], int N, int *m){
  if (N == 0) {
    *m = 0;
    return *m;
  }
  else {
    int i;
    for (i = 0; i < N; i++){
      if(*m < v[i]) *m = v[i];
    }
  }
  return *m;
}
int main(){
  int v[5] = {1,2,3,4,3};
  int m = -1;
  printf ("%d\n",maximum(v,5,&m));
  return 0;
}

--------------- EXERCICIO 6 -------------

void quadrados (int q[], int N){
  int i,j = 0;
  for(i = 1; i < N; i++){
    q[j] = i*i;
    j++;
  }
}

