#include <stdlib.h>

int diferente (int i, int j, char s[]){
    
    while ( i < j )
    {
        if (s[i] == s[j]) return 0;
        
        i++;
    }
    return 1;
}


int difConsecutivos(char s[]) 
{
    int i, j, max = 0, x = 0;
    
    for (i = 0; s[i] != '\0'; i++){
        
        for (j = i; s[j] != '\0' && diferente (i,j,s); j++) x++;
        if ( x > max) max = x;
        x = 0;
    }
    return max;   
}
