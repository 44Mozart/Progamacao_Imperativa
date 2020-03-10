int retiraNeg (int v[], int N){
    int j = 0, i;
    for (i = 0; i < N; i++){
        if (v[i] >= 0) {
            v[j] = v[i];
            j++;
        }
    }
    return j;
}
