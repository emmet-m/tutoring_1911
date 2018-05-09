#include <stdio.h>

int main (void){
    int     n;
    int    *p, *q;
    p = &n;
    *p =  5;
    *q = 17;
    q =  p;
    *q =  8;
}
