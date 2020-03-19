 int comunsOrd (int a[], int na, int b[], int nb){
       int i,j,c;
       i = j = c = 0;
       while (i  < na && j < nb){
           if (a[i] < b[j]) i++;
           else if (a[i] > b[j]) j++;
           else {
               i++;
               j++;
               c++;
           }
       }
       return c;
   }
