
#include <stdio.h>

int main (void) {
    int x;

    int counts[100] = {0};
 
    printf("Please enter a number between 1 and 99: ");

    while (scanf("%d", &x) == 1) {
        if (x < 1 || x > 99) {
            printf("Try again.\n");
        } else {
            counts[x]++;
            printf("You have entered %d %d times.\n", x, counts[x]);
        }
    }

    return 0;
}
