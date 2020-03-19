 int elimRepOrd (int v[], int N) {
       int aux[N];
       int i,j = 0;
       for(i = 0; i < N; i++){
           aux[j] = v[i];
           j++;
           while(v[i] == v[i+1]){
               i++;
           }
       }
       
       for(i = 0; i < j; i++){
           v[i] = aux[i]; 
       }
       return j;
   }
