   int menosFreq (int v[], int N){
    int i,n,min,m,j;
    n = N;
    min = v[0];
    for (i=0;i<N;i++){
        m = 0;
        for(j=0;j<N;j++){
            if (v[i] == v[j]){
                m++;
            }
        }
        if (m < n){
            min = v[i];
            n = m;
        }
    }
    return min;
}
