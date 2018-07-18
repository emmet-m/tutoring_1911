#include <stdio.h>
#include <stdlib.h>
#include "Stack.h"

int main(int argc, char * argv[]){

    printf("Testing new stack\n");

    Stack s = createStack();
    assert(s->size == 0);

    printf("Test passed\n");
    return 0;
}

