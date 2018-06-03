#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

void removeString (char * input, char toRemove);

// Do not change this function!
int main (void) {
    char buffer[MAX];
    char toRemove;

    printf("Enter an input string: ");

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

    printf("Enter a character to remove: ");
    toRemove = getchar();

    printf("Input string : '%s'\n", buffer);
    removeString(buffer, toRemove);
    
    printf("Output string: '%s'\n", buffer);

    return 0;
} 

/*
 * This function takes
 *
 */
void removeString (char * input, char toRemove) {
    // TODO: Fill in this function
}
