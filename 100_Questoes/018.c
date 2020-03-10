#include <string.h>
int maiorSufixo (char s1 [], char s2 []) {
    int l1, l2, x = 0;
    l1 = strlen(s1) - 1;
    l2 = strlen(s2) - 1;
    while (s1[l1] == s2[l2]){
        l1--;
        l2--;
        x++;
    }
   
    return x;
}
