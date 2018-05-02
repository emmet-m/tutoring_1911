#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

int main (int argc, char * argv[]) {
    // Check for errors
    if (argc < 2) {
        printf("Usage: ./file_read filename");
        // Don't run anything else, stop here
        return EXIT_FAILURE;
    }

    // Start at 1 ignoring the name of the program
    int i = 1;
    // Loop over all the arguments
    while (i < argc) {
        // A buffer to copy a string into
        char regularString[MAX_SIZE];
        // Fopen the file name in argv[i]
        FILE * f = fopen(argv[i], "r");
        // Get every line in the file
        while (fgets(regularString, MAX_SIZE, f) != NULL) {
            // Print the line
            printf("%s", regularString);
        } 
        // Move onto next file
        i++;
    }
    return EXIT_SUCCESS;
}
