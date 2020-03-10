#include <stdio.h>

int qDig (int n) {
    int r = 0;
    if (n == 0) r = 1;
    while (n != 0){
        n = n/10;
        r++;
    }
    return r;
}
