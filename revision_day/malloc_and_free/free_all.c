#include <stdlib.h>
#include <stdio.h>

void function1(int * p);
char * big (int ** var);
int * m();

/*
 * Which variables in this program need to be freed?
 * What's the latest you can free each of the variables?
 */

int main (void) {

    char * a;
    int * b;
    int c;

    function1(&c);
    a = big(&b);

    return 0;
}

void function1(int * p) {
    *p = 1;
}

char * big (int ** var) {
    char * str = malloc(sizeof(char)*10);

    int * tmp = m();

    *var = malloc(sizeof(int) * 10);

    return str;
}

int * m(){
    int * p = malloc(sizeof(int)*10);
    return p;
}
