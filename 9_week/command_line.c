#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    printf("%s\n", argv[argc - 1]);

    char arr[] = {'1','0','3','\0'};
    int i = atoi(arr);
    printf("%d\n", arr);

    return 0;
}

