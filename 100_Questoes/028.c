 int crescente (int a[], int i, int j){
       int r = 1;
       for (i; i < j && r == 1; i++){
           if (a[i] <= a[i+1]);
           else r = 0;
       }
       return r;
   }
