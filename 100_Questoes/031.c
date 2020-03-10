int maisFreq (int v[], int N){
       int r, m = 0,i,j = 0, mai;
       for (i = 0; i < N; i++){
           r = 0;
           while (v[i] == v[j]) {
               j++;
               r++;
           }
           if (r > m) {
               m = r;
               mai = v[i];
           } 
       }
       return mai;
   }
