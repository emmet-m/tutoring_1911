/* 
 * fibonacci.c
 *
 * A recursive/iterative example and comparison of the fibonacci sequence.
 */

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

unsigned long long fibi(int num);
unsigned long long fibr(int num);

int main (void) {
    int i;
    printf("Fibonacci number to print: ");
    scanf("%d", &i);

    printf("%lld\n", fibi(i));

    return EXIT_SUCCESS;
}

unsigned long long fibr(int num) {
    if (num == 0) return 0;
    if (num == 1) return 1;

    return fibr(num-2) + fibr(num-1);
}

unsigned long long fibi(int num) {
    // Valid argument check
    assert(num >= 0);

    if (num == 0) return 0;
    if (num == 1) return 1;

    unsigned long long prev = 1;
    unsigned long long count = 1;
    int i = 2; 

    while (i < num) {
        unsigned long long tmp = count;
        count = count + prev;
        prev = tmp;
        i++;
    }

    return count;
}
