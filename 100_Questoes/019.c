#include <string.h> 

int sufPref (char s1[], char s2[]) {
    
    int i = 0, j,x = 0;
    j = 0;
    while (s1[i] != s2[j]) i++;
    while (s1[i] != '\0' && s2[j] != '\0'){
        if (s1[i] == s2[j]){
            i++;
            j++;
            x++;
        }
        else {
            j = 0;
            x = 0;
            i++;
        }
    }
    if (s1[i] != '\0')  x = 0;
    return x;
}
