int contaPal (char s[]) {
    int i, x = 0;
    for (i = 0; s[i] != '\0'; i++){
        
        if (s[i] != '\0' && s[i] != '\n'  && s[i] != ' ' && (s[i+1] == '\0' || s[i+1] == '\n' || s[i+1] == ' ')) x++;
    }
    return x;
}
