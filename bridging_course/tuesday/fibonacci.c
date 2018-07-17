/* 
 * fibonacci.c
 *
 * A recursive/iterative example and comparison of the fibonacci sequence.
 */

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

unsigned long long fibi(int num);

int main (void) {
    int i;
    scanf("%d", &i);

    printf("%lld", fibi(i));

    return EXIT_SUCCESS;
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

unsigned long long fibr(int num) {

}
