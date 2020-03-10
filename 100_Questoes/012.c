#include <string.h>
void strnoV (char t[]){
    int i,l,j = 0;
    l = strlen(t+1);
    char aux[l];
    for (i = 0; t[i] != '\0'; i++){
        if (t[i] == 'A' || t[i] == 'a');
        else if (t[i] == 'E' || t[i] == 'e');
        else if (t[i] == 'I' || t[i] == 'i');
        else if (t[i] == 'O' || t[i] == 'o');
        else if (t[i] == 'U' || t[i] == 'u');
        else {
            aux[j] = t[i];
            j++;
        }
    }
    aux[j] = '\0';
    for(i = 0; aux[i] != '\0'; i++){
        t[i] = aux[i];
    }
    t[i] = '\0';
}
