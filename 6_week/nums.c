#include <stdio.h>

#define N 10

int main(void) {
    int digitCount[N] = {0};
    int x, lastDigit;

    while (scanf("%d", &x) == 1) {
        lastDigit = x % N;
        digitCount[lastDigit] = digitCount[lastDigit] + 1;
    }
    
    lastDigit = 0;
    while (lastDigit < N) {
        printf("%d numbers with last digit %d read\n", digitCount[lastDigit], lastDigit);
        lastDigit = lastDigit + 1;
    }

    return 0;
}
