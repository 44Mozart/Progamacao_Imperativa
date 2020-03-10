#include <string.h>
#include <stdio.h>

void strrev (char s[]) {
    int i = 0;
    int len = strlen(s)-1;
    char aux[len];
    for(len; len >= 0; len--){
        aux[i] = s[len];
        i++;
    }
    aux[i] = '\0';
    for (i = 0; aux[i]!='\0';i++){
        s[i] = aux[i];
    }    
    s[i] = '\0';
    return;
}
