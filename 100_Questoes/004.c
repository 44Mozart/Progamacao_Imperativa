  
#include <stdio.h>
int bitsUm (unsigned int x){
    int r=1;
    if (x == 0) r = 0;
    while (x != 0){
        if (x == 1);
        else if (x%2 == 0);
        else r++;
        x = x/2;
    }
    return r;
}
