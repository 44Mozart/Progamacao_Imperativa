void merge (int r [], int a[], int b[], int na, int nb){
    int i, j, aux;
    i = j = aux = 0;
    while (i < na && j < nb){
        if (a[i] <= b[j]) {
            r[aux] = a[i];
            i++;
            aux++;
        }
        else if (a[i] > b[j]){
            r[aux] = b[j];
            j++;
            aux++;
        }
    }
    if (i == na && j < nb){
        for (j; j < nb; j++){
            r[aux] = b[j];
            aux++;
        }
    }
    else if (i < na && j == nb){
        for (i; i < na; i++){
            r[aux] = a[i];
            aux++;
        }
    }
}
