#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "Stack.h"

int main(int argc, char * argv[]){

    printf("Testing new stack\n");

    Stack s = createStack();
    assert(size(s) == 0);

    push(s,5);
    assert(top(s) == 5);
    printf("Test\n");
    assert(size(s) == 1);

    push(s,10);
    assert(top(s) != 5);
    assert(size(s) != 1);
    assert(top(s) == 10);
    assert(size(s) == 2);

    assert(pop(s) == 10);
    assert(top(s) == 5);
    assert(size(s) == 1);

    destroy(s);

    printf("Test passed\n");
    return 0;
}


int main (void) {
    return 0;
}
