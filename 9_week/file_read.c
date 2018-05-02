#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

int main (int argc, char * argv[]) {
    if (argc < 2) {
        printf("Usage: ./file_read filename");
        return EXIT_FAILURE;
    }
    int i = 1;
    while (i < argc) {
        char regularString[MAX_SIZE];
        // fopen...
        FILE * f = fopen(argv[i], "r");
        // fgets...
        while (fgets(regularString, MAX_SIZE, f) != NULL) {
            // Print string
            printf("%s", regularString);
        } 
        i++;
    }
    return EXIT_SUCCESS;
}
