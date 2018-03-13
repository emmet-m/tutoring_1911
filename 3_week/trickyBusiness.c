#include <stdio.h>

int main (void) {

    int y = 5;
    int x = 0;

    if (x == 5 && y/x > 1) {

        printf("Apple\n");

    } else if (y == 5 || y/x > 1) {

        printf("Cherry\n");

    } else {

        printf("Fruit salad!");

    }

    return 0;
}
