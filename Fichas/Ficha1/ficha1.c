// ------------- F I C H A  1 - P I ----------------

#include <stdio.h>
// --------------- Exercicio 2 ----------------


int main () {
  int i, j;
  int n;
  scanf("%d",&n);
  for(i = 0; i < n; i++){
    for (j = 0; j < n; j++){
      putchar('#');
    }
    printf("\n");
  }
  return 0;
}
*/

// ----------------- Exercicio 3 ---------------

/*

int main () {
  int i, j, n;
  scanf("%d",&n);
  for(i = 0; i < n; i++){
    if (i%2 == 0){
      for (j = 0; j < n; j++){
        if (j%2 == 0){
          putchar('#');
        }
        else putchar('_');
      }
    }
    else {
      for (j = 0; j < n; j++){
        if (j%2 == 0){
          putchar('_');
        }
        else putchar('#');
      }
    }
    printf("\n");
  }
  return 0;
}


// -------------------- Exercicio 4.1 -----------------


int main () {
  int n,i,j;
  scanf("%d",&n);
  for (i = 0; i < n; i++){
    for (j = 0; j <= i; j++){
      putchar('#');
    }
    printf("\n");
  }
  for (i = n; i > 0; i--){
    for (j = 1; j < i; j++){
      putchar('#');
    }
    printf("\n");
  }
  return 0;
}


// -------------------- Exercicio 4.2 ---------------


void horizontal (int n){
  int i,j,k,c;
  c = n-1;
  for (i = 0; i < n; i++){
    for(j = 0; j < c; j++){
      printf(" ");
    }
    for(k = 0; k <= i; k++){
      putchar('#');
    }
    for (k = i; k > 0; k--){
      putchar('#');
    }
    for (j = 0; j < c; j++){
      printf(" ");
    }
    printf("\n");
    c--;
  }
}

int main () {
  int n;
  scanf("%d",&n);
  horizontal(n);
  return 0;
}
