#include <stdio.h>

void swap ( int x, int y );

int main(void){
    int x = 10;
    int y = 99;

    printf("%d %d\n",x,y);

    swap(x,y);

    printf("%d %d\n",x,y);


    return EXIT_SUCCESS;
}

void swap (int x, int y){
    int tmp;
    tmp = x;
    x = y;
    y = tmp;
}
