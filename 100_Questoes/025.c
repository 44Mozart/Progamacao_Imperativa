int limpaEspacos (char texto[]) {
    int i, j = 0;
    for (i = 0; texto[i] != '\0'; i++){
        if (texto[i] == ' ' && texto[i+1] == ' ');
        else{
            texto[j] = texto[i];
            j++;
        }
    }
    texto[j] = '\0';
    return j;
}
