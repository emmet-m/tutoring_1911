#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    // Print the last argument in argv
    printf("%s\n", argv[argc - 1]);

    // The number 103 as a string of characters
    char arr[] = {'1','0','3','\0'};
    // The actual number 103
    int i = atoi(arr);
    printf("%d\n", arr);

    return 0;
}

