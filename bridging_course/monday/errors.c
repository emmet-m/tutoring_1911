/*
 * errors.c
 *
 * There are errors in this code...
 */


#include <stdio.h>
#include <stdlib.h>

struct node {
    int       data;
    struct node *next;
};


int main () {
    struct node *a, *b, *c, *d;
    a = NULL;
    b = malloc(sizeof b);
    c = malloc(sizeof struct node);
    d = malloc(8);
    c = a;
    d.data = 42;
    c->data = 42;
    
    return EXIT_SUCCESS;
}

/*

int main () {
    struct node *a, *b, *c, *d;
    a = NULL;
    b = malloc(sizeof b);
    c = malloc(sizeof struct node);
    d = malloc(8);
    c = a;
    d.data = 42;
    c->data = 42;
    
    return EXIT_SUCCESS;
}
 
*/
