#include<stdio.h>
#include<stdlib.h>


int main(int argc, char * argv[]) {

    if (argc != 3) {
        fprintf(stderr, "ERROR, ENTER 2 NUMBERS\n");
        return 1;
    }
    int start = atoi(argv[1]);
    int finish = atoi(argv[2]);

    while (start <= finish) {
        if (start % 13 == 0) {
            printf("%d\n", start);
        }
        start++;
    }

    return 0;
}
