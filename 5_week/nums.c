#include <stdio.h>

#define MAX_SIZE 10000

int main (void){

    int arr[];

    int i;
    int count = 0;

    while (scanf("%d", &i) == 1 && count < MAX_SIZE) {
        arr[count] = i;
        count++;
    }

    printf("count: %d\n", count);

    printf("%d\n", arr[(count)/2 - 1]);

    return 0;
}
