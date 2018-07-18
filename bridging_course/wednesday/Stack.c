/*
 * Stack.c
 *
 * Implementation of a stack ADT.
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include "List.h"
#include "Stack.h"

struct stack {
    int size;
    List l;
};

Stack createStack(void) {
    Stack s = malloc(sizeof(struct stack));
    if (s == NULL) {
        fprintf(stderr,"No memory\n");
        exit(1);
    }
    s->size = 0;
    s->l = make_list();
    return s;
}
               
void destroy(Stack s) {
    while (length(s->l) != 0 ) {
        s->l = list_remove(s->l);
    }
    free(s);
}
        
void push(Stack stack, int item) {
    stack->l = insert(item, stack->l);
    stack->size++;
}
 
int pop(Stack stack) {
    if (is_empty(stack->l)) {
        fprintf(stderr, "Error - pop on empty stack");
        exit(1);
    }

    int d = data(stack->l);

    stack->l = list_remove(stack->l);

    stack->size--;

    return d;
}
             
int top(Stack stack) {
    if (is_empty(stack->l)) {
        fprintf(stderr, "Error - top on empty stack");
        exit(1);
    }

    int d = data(stack->l);

    return d;
}
             
int size(Stack stack) {
    return stack->size;
}
            
