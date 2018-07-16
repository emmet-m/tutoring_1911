/*
 * assert_test.c
 *
 * A quick demonstration of asserts
 *
 */


#include <stdio.h>
#include <stdlib.h>
#include <assert.h>


int main (void) {

    assert(1); // Will do nothing

    // Will crash!
    //assert(0); 

    int i = 0;
    int k = 0;

    assert(i == k);

    k++;
    assert(i == k);


    return EXIT_SUCCESS;
}
