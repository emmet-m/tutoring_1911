#include <stdio.h>
#include <stdlib.h>

#define MAXITEMS 4

int z;  

void fun(int x);

int main(int argc, char * argv[]) {

    int var = 5;
    int array[MAXITEMS] = {1,9,1,7};
    int * q = malloc(sizeof(int));
    char s0[] = "Hello";

    //DO SOMETHING WITH THE VARIABLES
    fun(var);


    return EXIT_SUCCESS;
}

void fun(int x){
    int myFun = x/2.0;
    printf("I am having %d times the fun you are!\n",myFun);
}
