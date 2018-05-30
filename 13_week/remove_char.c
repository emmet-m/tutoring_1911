#include<stdio.h>
#include<stdlib.h>

int removeChar(char str[], char c);


int main(int argc, char ** argv) {

    char test[] = "Hello";

    removeChar(test, 'l');

    printf("%s\n", test);

    return 0;
}

int removeChar(char str[], char c) {
    int where = -1;
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == c && where == -1) {
            where = i;
        }
        i++;
    }
    
    if (where == -1) {
        return 0;
    }
    
    i = where;
    while (str[i] != '\0') {
        str[i] = str[i + 1];
        i++;
    }
    return 1;
}

