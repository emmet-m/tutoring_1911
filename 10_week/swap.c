#include <stdio.h>

void swap ( int * xp, int * yp );

int main(void){
    int x = 10;
    int y = 99;

    printf("%d %d\n",x,y);

    swap(&x,&y);

    printf("%d %d\n",x,y);


    return 0;
}

void swap (int * xp, int * yp){
    int tmp;
    tmp = *xp;
    *xp = *yp;
    *yp = tmp;
}
