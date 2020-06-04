#include <string.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct slist *LInt;
typedef struct slist {
	int valor;
	LInt prox;
} Nodo;


//Exercicio 1a
LInt criaExemplo (){
	LInt primeiro = (LInt) malloc (sizeof(struct slist));
	LInt segundo  = (LInt) malloc (sizeof(struct slist));
	LInt terceiro = (LInt) malloc (sizeof(struct slist));

	primeiro->valor = 10;
	segundo ->valor = 5;
	terceiro->valor = 15;

	primeiro->prox = segundo;
	segundo->prox = terceiro;

	return primeiro;
}

//Exercicio 1b i
LInt cons (LInt l, int x){
  LInt aux = malloc(sizeof(struct slist));
  aux->valor = x;
  aux->prox = l;
  return aux;
}

//Exercicio 1b ii
LInt tail (LInt l){
  LInt tmp = l;
  l = l->prox;
  free(tmp);
  return l;
}

//Exercicio 1b iii
LInt init (LInt l){
  LInt tmp = l;
  if(l->prox == NULL){
    free(l);
    return NULL;
  }
  while(tmp->prox->prox != NULL){
    tmp = tmp->prox;
  }
  free(tmp->prox);
  tmp->prox = NULL;
  return l;
}

LInt snoc (LInt l, int x){
  LInt tmp = l;
  if(l == NULL){
    LInt new = malloc(sizeof(struct slist));
    new->valor = x;
    new->prox = NULL;
    l = new;
    return l;
  }
  while(tmp->prox != NULL){
    tmp = tmp->prox;
  }
  LInt new = malloc(sizeof(struct slist));
  new->valor = x;
  new->prox = NULL;
  tmp->prox = new;
  return l;
}

LInt concat (LInt a, LInt b){
  if(a == NULL){
    a = b;
  }
  else if(b == NULL);
  else {
    LInt tmp = a;
    while(tmp->prox != NULL)
      tmp = tmp->prox;
    tmp->prox = b;
  }
  return a;
}

void imprimeL (LInt head) {
	LInt current = head;
	while (current != NULL){
		printf("%d\n", (*current).valor);
		current = current->prox;
	}
}

int main(){
  /*EX 1A
  LInt exemplo = criaExemplo();
  imprimeL(exemplo);

  //EX 1B-i
  LInt aux = criaExemplo();
  LInt nova = cons(aux,2);
  imprimeL(nova);

  //EX 1B-ii
  LInt aux = criaExemplo();
  LInt alt = tail(aux);
  imprimeL(alt);

  //EX 1B-iii
  LInt aux = criaExemplo();
  LInt nova = init(aux);
  imprimeL(nova);

  //EX 1B-iv
  LInt aux = criaExemplo();
  LInt nova = snoc(aux,20);
  imprimeL(nova);*/

  //EX 1B-v
  LInt a = criaExemplo();
  LInt b = criaExemplo();
  LInt nova = concat(a,b);
  imprimeL(nova);
  
  return 0;
}
