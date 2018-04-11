#include <stdio.h>

#define N 6

int countOccurences(int arr[N], int y, int size);

int main(void) {
    int digitCount[N] = {0};
    int x;
    int count = 0;

    while (count < N) {
        scanf("%d", &x);
        digitCount[count] = x;
        count++;
    }

    scanf("%d", &x);
    
    int numXFound = countOccurences(digitCount, x, N);

    printf("%d occurred %d times in the %d numbers read.\n", x, numXFound, N);

    return 0;
}

int countOccurences(int arr[N], int y, int size) {
    int count = 0;
    int numXFound = 0;
    while (count < size) {
        if (y == arr[count]) {
            numXFound++;
        }
        count++;
    }
    return numXFound;
}
