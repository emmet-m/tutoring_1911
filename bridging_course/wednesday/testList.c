#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#define TRUE 1
#define FALSE 0
#include "List.h"


int main (void) {

    List n = make_list();
    n = insert(10,n);
    n = insert(100,n);

    assert(data(n) == 100);
    n = list_remove(n);
    assert(data(n) == 10);

    return EXIT_SUCCESS;
}
