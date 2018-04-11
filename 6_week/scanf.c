#include <stdio.h>

int main () {
    int x,y;
    int numValuesRead = scanf("%d %d",&x,&y);
    printf("I read in %d values : x = %d y = %d\n", numValuesRead, x, y);

    return 0;
}
