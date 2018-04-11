#include <stdio.h>

int nonDecreasing(double array[], int length);

int main (void) {
    
    double arr[] = {1,2,3,4,5,6};
    double arr2[] = {1,2,3,5,4,6};

    printf("%d for arr\n", nonDecreasing(arr, 6));
    printf("%d for arr2\n", nonDecreasing(arr2, 6));

    return 0;
}

int nonDecreasing(double array[], int length) {
    
    int x = 0;
    while (x < length - 1) {
        if (array[x] > array[x + 1]) {
            return 0;
        }
        x++;
    }
    return 1;
}
