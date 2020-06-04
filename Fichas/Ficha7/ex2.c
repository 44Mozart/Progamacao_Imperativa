#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Aluno{
  char nome[60];
  int numero;
  int nota;
}Aluno;

typedef struct Turma* tPointer;

typedef struct Turma{
  Aluno aluno;
  tPointer prox;
}Turma;


void imprimeT (tPointer head){
	tPointer current = head;
	while (current != NULL){
		printf("%s\n", (current->aluno).nome);
		printf("%d\n", (current->aluno).numero);
		printf("%d\n\n", (current->aluno).nota);
		current = current->prox;
	}
}

tPointer newtPointer (Aluno a, tPointer t){
    tPointer new = (tPointer) malloc (sizeof (struct Turma));

    if (new!=NULL) {
        new->aluno = a;
        new->prox  = t;
    }
    return new;
}

int acrescentaAluno (Turma *t, Aluno a){
	tPointer current = t;
	if (current == NULL){
		return 1;
	}
	int i;
	tPointer tmp;
  for (i = 0; a.numero > (current->aluno).numero && current->prox != NULL; i++){
     tmp = current;
     current = current->prox;
  }
  if (a.numero > (current->aluno).numero){
    tPointer new = newtPointer (a, NULL);
  	current->prox = new;
  }
  else {
  	tPointer new = newtPointer (a, current);
    if (i == 0){
  		t = new;
  	}
    else {
      tmp->prox = new;
    }
  }
	return 0;
}

Aluno *procura (Turma* t, int n){
  tPointer current = t;
  if(t == NULL){
    return NULL;
  }
  while(current != NULL){
    if((current->aluno).numero == n){
      printf("O aluno foi encontrado na turma\n");
      return &(current->aluno);
    }
    current = current->prox;
  }
  printf("O aluno não foi encontrado\n");
  return NULL;
}


tPointer criaTurma(){
    tPointer nodo1 = malloc(sizeof(struct Turma));
    tPointer nodo2 = malloc(sizeof(struct Turma));
    tPointer nodo3 = malloc(sizeof(struct Turma));
    tPointer nodo4 = malloc(sizeof(struct Turma));

    Aluno Persa;
    strcpy(Persa.nome, "Persa");
    Persa.numero = 53;
    Persa.nota = 12;

    Aluno Gumball;
    strcpy(Gumball.nome, "Gumball");
    Gumball.numero = 86;
    Gumball.nota = 14;

    Aluno Deejay;
    strcpy(Deejay.nome, "Deejay");
    Deejay.numero = 139;
    Deejay.nota = 14;

    Aluno Hasdrubal;
    strcpy(Hasdrubal.nome, "Hashdrubal");
    Hasdrubal.numero = 141;
    Hasdrubal.nota = 14;

    nodo1->aluno = Persa;
    nodo1->prox = nodo2;
    nodo2->aluno = Gumball;
    nodo2->prox = nodo3;
    nodo3->aluno = Deejay;
    nodo3->prox = nodo4;
    nodo4->aluno = Hasdrubal;
    nodo4->prox = NULL;

    return nodo1;
}

int main(){

  /*EX 2b
  Aluno Mozart;
  strcpy(Mozart.nome, "Mozart");
  Mozart.numero = 44;
  Mozart.nota = 18;
  tPointer t = criaTurma();
  acrescentaAluno(t,Mozart);
  imprimeT(t);*/

  //EX 2c
  tPointer t;
  t = criaTurma();
  printf("%p\n",procura(t,136));
  printf("%p\n",procura(t,141));

}
