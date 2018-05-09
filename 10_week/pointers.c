#include <stdio.h>

int main (void){
    int     n;
    int    *p, *q;
    p = &n;
    *p =  5;
    q = NULL;
    *q = 17;
    q =  p;
    *q =  8;

    printf("%d\n", n);

    return 0;
}
