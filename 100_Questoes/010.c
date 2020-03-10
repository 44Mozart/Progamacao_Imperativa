#include <stdio.h>

char *mystrstr (char s1[], char s2[]) {
    int i = 0,j = 0, r = 0;
    if (s2[0] == '\0') return s1;
    while (s1[i] != s2[0] && s1[i] !='\0'){
        i++;
        r++;
    }
    if (s1[i] == '\0') return NULL;
    while (s1[i] == s2[j] && s1[i]!='\0' && s2[j]!='\0'){
        i++;
        j++;
    }
    if (s1[i] == '\0' && s2[j] != '\0') return NULL;
    if (s1[i] != '\0' && s2[j] != '\0') return NULL;
    
    return s1+r;
}
