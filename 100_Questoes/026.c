void insere (int s[], int N, int x){
    int aux[N+1];
    int j = 0,i = 0;
    while (x > s[i] && i < N){
        aux[j] = s[i];
        j++;
        i++;
    }
    aux[j] = x;
    j++;
    while (x <= s[i] && i < N){
        aux[j] = s[i];
        j++;
        i++;
    }
    for (i = 0; i <= N; i++){
        s[i] = aux[i];
    }
}
