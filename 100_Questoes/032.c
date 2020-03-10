int maxCresc (int v[], int N) {
       int i, r = 1, m = 1;
       for (i = 0; i < N; i++){
           if (v[i] <= v[i+1]){
               r++;
           }
           else {
               if (r > m){
                   m = r;
               }
               r = 1;
           }
       }
       return m;
   }
