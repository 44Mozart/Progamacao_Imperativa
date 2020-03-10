int contaVogais (char s[]) {
    int i, v = 0;
    for ( i = 0; s[i] != '\0'; i++){
        if (s[i] == 'a' || s[i] == 'A') v++;
        else if (s[i] == 'e' || s[i] == 'E') v++;
        else if (s[i] == 'i' || s[i] == 'I') v++;
        else if (s[i] == 'o' || s[i] == 'O') v++;
        else if (s[i] == 'u' || s[i] == 'U') v++; 
    }
    return v;
}
