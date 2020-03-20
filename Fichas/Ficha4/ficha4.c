#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// --------------- E X E R C I C I O    1 ----------------
int minusculas (char s[]) {
  int i,t = 0;
  for (i = 0; s[i] != '\0'; i++){
    if(isupper(s[i])) {
      s[i] = tolower(s[i]);
      t++;
    }
  }
  return t;
}

int main (){
  char s[4] = "abCA";
  int t = minusculas(s);
  printf("Numero de maisculas: %d\n",t);
  return 0;
}

// --------------- E X E R C I C I O    2 ----------------

int contalinhas (char s[]){
  int i, t;
  for (i = 0; s[i]!='\0';i++){
    if (s[i] == '\n') t++;
  }
  return t;
}

int main (){
  char s[8] = "a\nb\nC\nA\n";
  int t = contalinhas(s);
  printf("Numero de linhas: %d\n",t);
  return 0;
}


// --------------- E X E R C I C I O    3 ----------------

int contaPal (char s[]){
  int i,t = 0;
  for (i = 0; s[i] != '\0'; i++){
    if (!isspace(s[i]) && (isspace(s[i+1]))) t++;

  }
  return t;
}

int main (){
  char s[13] = "mundo cruel! ";
  int t = contaPal(s);
  printf("Numero de palavras: %d\n",t);
  return 0;
}

// --------------- E X E R C I C I O    4 ----------------

int procura (char *p, char *ps[], int N){
  int i, t = -1;
  for (i = 0; i < N && t == -1; i++){
    if(strcmp(p,ps[i])) t = i;
  }
  return t;
}

// ---------------- E X E R C I C I O  5 ---------------

#define MAX 100
typedef struct stack {
int sp;
int valores [MAX];
} STACK;

void initStack (STACK *s) {
  s->sp = 0;
}

int isEmptyS (STACK *s){
  int r = 0;
  if(s->sp == 0){
    r = 1;
  }
  return r;
}

int push (STACK *s, int x) {
  int r = 1;
  if(s->sp < MAX){
    s->valores[s->sp] =x;
    s->sp++;
    r = 0;
    }
  return r;
}
  int pop (STACK *s, int *x) {
    int r = 1;
    if (!(isEmpty(s)){
      *x = s->valores[s->sp-1];
      s->sp--;
      r = 0;
    }
    return r;
 }
      
int top (STACK *s, int *x){
  int r = 1;
  if (!(isEmpty(s)){
    *x = s->valores[s->sp-1];
    r = 0;
  }
  return r;
}
