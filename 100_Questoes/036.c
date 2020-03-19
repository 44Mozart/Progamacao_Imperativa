 int comuns (int a[], int na, int b[], int nb){
      int i,j,c,r;
      c = 0;
      for (i = 0; i < na; i++){
          r = 0;
          for (j = 0; j < nb && r == 0; j++){
              if (a[i] == b[j]){
                  c++;
                  r = 1;
              }
          }
      }
      return c;
   }
