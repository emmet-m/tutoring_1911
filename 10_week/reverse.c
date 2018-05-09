#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 100

char * reverseString(char * s);

int main (void) {

    char arr[] = {'h', 'e', 'l', 'l', 'o', '\0'};

    char * r = reverseString(arr);

    printf("%s\n", r);

    free(r);

    return 0;
}

char * reverseString(char * s) {
    char * rev = malloc((strlen(s) * sizeof(char)) + 1);

    int i = 0;

    while (i < strlen(s)) {
        rev[strlen(s) - i - 1] = s[i];
        i++;
    }

    rev[i] = '\0';

    return rev;
}
