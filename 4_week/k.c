#include <stdio.h>

int main(void) {
    int k;
    printf("Enter a number > 1: ");
    scanf("%d", &k);

    while (k >= 1) {
        printf("%d %d\n", k, k*k);
        if (k % 2 != 0) {
            printf("Number is odd.\n");
        } else {
            printf("Number is even.\n");
        }
        k--;
    }

    return 0;
}
