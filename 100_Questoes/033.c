  
int rep (int v[], int n, int x){
    int i, r = 0;
    for (i = 0; i < n && r == 0; i++){
        if (v[i] == x) r = 1;
    }
    return r;
}

   int elimRep (int v[], int N) {
       int i,j = 0;
       
       for (i = 0; i < N; i++){
           if (rep(v,i,v[i])){
               for (j = i; j < N; j++) v[j] = v[j+1];
               
               N--;
               i--;
           }
       }
       return N;
   }
