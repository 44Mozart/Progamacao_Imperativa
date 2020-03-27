#include <stdio.h>
#include <stdlib.h>
#include "Queue.h"

// Static queues 

void SinitQueue (SQueue q){
     q->front = 0;
     q->length = 0;
}

int SisEmptyQ (SQueue q){
    return (q->length == 0);
}

int Senqueue (SQueue q, int x){
    int r = 1;
    if(q->length < Max){
    	q->value[q->length] = x;
    	q->length++;
    	r = 0;
     }
     return r;
}

int Sdequeue (SQueue q, int *x) {
    int r = 1;
    if(!(SisEmptyQ(q)){
         *x = q->values[q->front];
         for(int i = 1; i < q->length; i++){
	     q->values[i-1] = q->values[i];
	 }
	 r = 0;
    }
        return r;
}

int Sfront (SQueue q, int *x) {	
    int r = 1;
    if(!(SisEmptyQ(q)){
         *x = q->values[q->front];
	 r = 0;
    }
    return r;
}

void ShowSQueue (SQueue q){
    int i, p;
    printf ("%d Items: ", q->length);
    for (i=0, p=q->front; i<q->length; i++) {
        printf ("%d ", q->values[p]);
        p = (p+1)%Max;
    }
    putchar ('\n');
}

// Queues with dynamic arrays

int dupQueue (DQueue q) {
	// ...
	return (-1);
}

void DinitQueue (DQueue q) {
	// ...
}

int  DisEmptyQ (DQueue s) {
	return (-1);
}

int  Denqueue (DQueue q, int x){
	// ...
	return (-1);
}

int  Ddequeue (DQueue q, int *x){
	// ...
	return (-1);
}

int  Dfront (DQueue q, int *x){
	// ...
	return (-1);
}

void ShowDQueue (DQueue q){
    int i, p;
    printf ("%d Items: ", q->length);
    for (i=0, p=q->front; i<q->length; i++) {
        printf ("%d ", q->values[p]);
        p = (p+1)%q->size;
    }
    putchar ('\n');
}
