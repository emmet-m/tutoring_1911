#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main (void) {
    int count;
    char array[1000];
    scanf("%d", &count);
    getchar();
    fgets(array, 1000, stdin);

    int len = strlen(array);

    if (array[len - 1] == '\n') {
        array[len-1] = '\0';
    }

    printf("%s %d\n", array, count);

    return 0;
}
