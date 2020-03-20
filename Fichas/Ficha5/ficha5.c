#include <stdio.h>

void swap (int v[], int i, int j){
	int t=v[i];
	v[i]=v[j]; v[j]=t;
}

/////// Insertion Sort 

void insere (int v[], int N, int x){
    int i, j;
    for (i = 0; i < N && v[i] < x; i++);
    for (j = N; j != i; j--) {
        v[j] = v[j-1];
    }
    v[i] = x;
}
/*
void insere (int v[], int N, int x){
     int aux[N+1];
    int j = 0,i = 0;
    while (x > v[i] && i < N){
        aux[j] = v[i];
        j++;
        i++;
    }
    aux[j] = x;
    j++;
    while (i < N){
        aux[j] = v[i];
        j++;
        i++;
    }
    for (i = 0; i <= N; i++){
        v[i] = aux[i];
    }
}
*/

void iSort1 (int v[], int N) {
	int i; 
	for (i = 1; i < N; i++){
	    insere(v,i,v[i]);
	}
}

void iSort2 (int v[], int N){
	int i,j,m;
	for(i = 0; i < N-1; i++){
	    m = i;
	    for(j = i+1; j < N; j++){
	        if(v[j] < v[m]) m = j; 
	    }
	    swap(v,i,m);
	}
}


////// Max Sort ///////

int maxInd (int v[], int N){
	int i,m = 0;
	for (i = 1; i < N; i++){
	    if(v[m] < v[i]) m = i;
	}
	return m;
}

void maxSort1 (int v[], int N) {
	int i,m;
	for(i = N-1; i > 0; i--){
	    m = maxInd(v,i+1);
	    swap(v,i,m);
	}
}

void maxSort2 (int v[], int N) {
	int i, j;
	for(i = N; i > 0; i--){
	    for(j = 0; j < i; j++){
	        if(v[i] < v[j]) swap (v,j,i);
	    }
	}
}


////// Bubble Sort ///////

int bubble (int v[], int N) {
	int i, r=0;
	for (i=1; i<N; i++)
		if (v[i] < v[i-1]) {
			swap (v, i, i-1); 
			r=i;
		}
	return r; // última posição trocada
}

void bubblesort1 (int v[], int N){
	int i,m;
	for (i = N; i > 0; i--){
	    m = bubble(v,i);
	    v[i] = v[m];
	}
}

void bubblesort2 (int v[], int N){
	int i,m;
	for (i = N; i > 0; i--){
	    m = bubble(v,i);
	    if (m == i) break;
	    v[i] = v[m];
	}
}
