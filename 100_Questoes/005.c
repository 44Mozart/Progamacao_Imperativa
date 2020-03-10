#include <stdio.h>
int trailingZ (int n) {
    int i = 0;
    while (n != 1){
        if (n%2 == 0) i++;
        else break;
        n = n/2;
    }
  
    return i;
}
