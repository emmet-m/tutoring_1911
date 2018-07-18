/*
 * Stack.h
 *
 * A stack ADT
 */


#ifndef STACK_H
#define STACK_H

typedef struct stack *Stack;

Stack createStack(void);                   // create a new stack
void destroy(Stack stack);            // free a stack
void push(Stack stack, int item);     // add new item to stack
int pop(Stack stack);                 // remove top item from stack and return it
int top(Stack stack);                 // return top item from stack but don't remove it
int size(Stack stack);                // return number elements in stack

#endif // STACK_H
