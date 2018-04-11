#include <stdio.h>

int nonDecreasing(double array[], int size);

int main (void) {
    
    double arr[] = {1,2,3,4,5,6};
    double arr2[] = {1,2,3,5,4,6};

    printf("%d for arr\n", nonDecreasing(arr, 6));
    printf("%d for arr2\n", nonDecreasing(arr2, 6));

    return 0;
}

int nonDecreasing(double array[], int size){
    int counter = 0;
    while (counter + 1 < size) {
        if (array[counter + 1] < array[counter]) {
            return 0;
        }
        counter++;
    }
    return 1;
}
