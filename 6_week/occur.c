#include <stdio.h>

#define N 6

int countMatches(int array[N], int x, int n);

int main(void) {
    int occurences[N] = {0};
    int x;
    int count = 0;

    while (count < N) {
        scanf("%d", &occurences[count]);
        count++;
    }

    scanf("%d", &x);
    count = 0;

    int numMatches = countMatches(occurences, x, N);

    printf("Found %d occurences of %d in the 6 numbers!\n", numMatches, x);
    
    return 0;
}

int countMatches(int array[N], int x, int n) {
    int count = 0;
    int numMatches = 0;
    while (count < n) {
        if (x == array[count]) {
            numMatches++;
        }
        count++;
    }

    return numMatches;
}
