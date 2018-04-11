#include <stdio.h>

int main(void) {
    int k;
    printf("Please enter some integers: ");
    scanf("%d", &k);

    int count = 0;

    while (k >= 0) {
        scanf("%d", &k);
        count++;
    }

    printf("You entered %d integers.\n", count);

    return 0;
}
