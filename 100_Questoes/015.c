int iguaisConsecutivos (char s[]) {
    int i,maior = 0,x = 1;
    for (i = 0; s[i]!='\0';i++){
        if (s[i] == s[i+1]) x++;
        else if (x>maior){
            maior = x;
            x = 1;
        }
    }
    retur
