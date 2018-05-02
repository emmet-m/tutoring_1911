#include <stdio.h>
#include <string.h>

int main (int argc, char * argv[]) {
    char lotr[][30]  =  {"Frodo", "Gandalf", "Gimli", "Elrond", "Aragorn"};

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
