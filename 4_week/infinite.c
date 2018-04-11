#include <stdio.h>

int main (void) {
    int x;
    int a[6];


    // This causes an infinite loop on cse...
    x = 0;
    while (x <= 6) {
        a[x] = 0;
        x++;
    }

    return 0;
}
