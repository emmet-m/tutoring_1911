#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

void reverseString (char * input);

// Do not change this function!
int main (void) {
    char buffer[MAX];
    char * check = fgets(buffer, MAX, stdin);
    if (check == NULL) {
        fprintf(stderr, "Please enter a string to reverse.\n");
        return 1;
    }
    int len = strlen(buffer);
    if (buffer[len-1] == '\n') {
        buffer[len-1] = '\0';
    }
    len--;

    printf("Input string : '%s'\n", buffer);
    reverseString(buffer);
    
    int afterLen = strlen(buffer);

    if (len != afterLen) {
        fprintf(stderr, "Error: String length was not the same after reversing!\n");
        return 1;
    }

    printf("Output string: '%s'\n", buffer);

    return 0;
} 


/*
 * Reverses a string as input
 * Changes the original string
 */
void reverseString (char * input) {
    // TODO: Fill in this function
}
