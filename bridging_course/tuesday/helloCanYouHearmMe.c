/*
 * helloCanYouHearMe.c
 *
 * Prints the string "Hello can you hear me?" n times.
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main (void) {
    return EXIT_SUCCESS;
}


void recursive(int amount) {
    if (amount <= 0) return;

    printf("HI\n");
    recursive(amount-1);
}
