#include <stdio.h>
#include <string.h>

--------------- EXERCICIO 1 -------------
float multInt (int n, float m){
  int i, r = 0;
  for (i = 1; i <= n; i++){
    r = i*m;
  }
  return r;
}

int main (){
  int n,m;
  printf("Introduza o m\n");
  scanf("%d",&m);
  printf("Introduza o n\n");
  scanf("%d",&n);
  printf("%f\n",multInt(n,m));
  return 0;
}

--------------- EXERCICIO 2 -------------
float multInt (int n, float m){
  int i, r = 0;
  while (n != 1){
    if (n%2 != 0) r += m;
    n = n/2;
    m = m*2;
  }
  r += m;
  return r;
}

int main (){
  int n,m;
  printf("Introduza o m\n");
  scanf("%d",&m);
  printf("Introduza o n\n");
  scanf("%d",&n);
  printf("%f\n",multInt(n,m));
  return 0;
}

--------------- EXERCICIO 3 -------------

int mdc (int a, int b){
  int m = 0,i;
  for (i = 1; i <= a && i <= b; i++){
    if((a%i == 0) && (b%i == 0)) m = i;
  }
  return m;
}
int main (){
  int n,m;
  printf("Introduza o a\n");
  scanf("%d",&m);
  printf("Introduza o b\n");
  scanf("%d",&n);
  printf("%d\n",mdc(m,n));
  return 0;
}

--------------- EXERCICIO 4 -------------

int mdc (int a, int b){
  int m;
  while(a != 0 && b != 0){
    if (a > b) a -= b;
    else b -= a;
  }
  if (a == 0) m = b;
  else if (b == 0) m = a;
  return m;
}

int main (){
  int n,m;
  printf("Introduza o a\n");
  scanf("%d",&m);
  printf("Introduza o b\n");
  scanf("%d",&n);
  printf("%d\n",mdc(m,n));
  return 0;
}

--------------- EXERCICIO 5 -------------

int mdc (int a, int b){
  int m;
  while(a != 0 && b != 0){
    if (a > b) a = a%b;
    else b = b%a;
  }
  if (a == 0) m = b;
  else if (b == 0) m = a;
  return m;
}

int main (){
  int n,m;
  printf("Introduza o a\n");
  scanf("%d",&m);
  printf("Introduza o b\n");
  scanf("%d",&n);
  printf("%d\n",mdc(m,n));
  return 0;
}

--------------- EXERCICIO 6 A -------------

int fib (int n){
  int f;
  if (n < 2) f = 1;
  else {
    f = fib(n-1) + fib(n-2);
  }
  return f;
}

int main (){
  int n;
  printf("Introduza o n\n");
  scanf("%d",&n);
  printf("%d\n",fib(n));
  return 0;
}

--------------- EXERCICIO 6 B -------------

int fib (int n){
  int f = 0,i = 0,t,f1,f2;
  f1 = 0;
  f2 = 1;
  if (n < 2) return f2;
  else {
    while(i < n){
      t = f2;
      f2 = f1 + f2;
      f1 = t;
      i++;
    }
  }
  return f2;
}

int main (){
  int n;
  printf("Introduza o n\n");
  scanf("%d",&n);
  printf("%d\n",fib(n));
  return 0;
}
