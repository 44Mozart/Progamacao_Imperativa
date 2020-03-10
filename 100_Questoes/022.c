int contida (char a[], char b[]) {
    int i, j, r;
    for (i = 0; a[i] != '\0'; i++){
        r = 0;
        for (j = 0; b[j] != '\0' && r == 0; j++){
            if (a[i] == b[j]) r = 1;
        }
        if (r == 0) return r;
    }
 
    return r;
}
