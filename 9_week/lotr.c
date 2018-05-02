#include <stdio.h>
#include <string.h>

int main (int argc, char * argv[]) {
    // Out lotr array is an array of strings
    //    strings are just an array of characters with a null delimiter,
    //    so our lotr array is an array of (arrays of characters)
    char lotr[][30]  =  {"Frodo", "Gandalf", "Gimli", "Elrond", "Aragorn"};

    // swap lotr[1] with lotr[4]
    char tmp[30];
    strcpy(tmp, lotr[1]);
    strcpy(lotr[1], lotr[4]);
    strcpy(lotr[4], tmp);

    // Print the array of strings
    int i = 0;
    while (i < 5) {
        int j = 0;
        while (j < 30) {
            putchar(lotr[i][j]);
            j++;
        }
        i++;
        putchar('\n');
    }
}
