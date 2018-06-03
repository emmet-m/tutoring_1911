#include <stdlib.h>
#include <stdio.h>

int * makeArray(int size);
void useArray(int * array, int size);


int main (void) {
    
    int * arr;
    arr = makeArray(100);

    // This function will fail if makeArray doesn't work!
    useArray(arr, 100);
}

/*
 * Make an array of the size passed into the function.
 * This function should also initialise the whole array to 0
 */
int * makeArray(int size) {
    // Make this function!
    return NULL;
}

void useArray(int * array, int size) {
    int a;
    int i;
    while (i < size) {
        a = array[i]; // This will break if the array is uninitialised
        if (a != 0) {
            printf("Error: Array was not initialised to all 0.\n");
            exit(1);
        }
        i++;
    }
    free(array);
}
