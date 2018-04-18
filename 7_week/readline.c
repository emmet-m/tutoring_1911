#include <stdio.h>

#define BUFFER_SIZE 4096

int main (void) {

    char line[BUFFER_SIZE];
    char c;
    int x = 0; // array counter

    fgets(line, BUFFER_SIZE, stdin);

    printf("%s", line);

    return 0;
}
