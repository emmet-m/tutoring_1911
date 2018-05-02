#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    printf("%s\n", argv[argc - 1]);

    if (argc >= 2) {
        int i = atoi(argv[1]);
        printf("%d\n", i);
    }

    return 0;
}

