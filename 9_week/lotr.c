#include <stdio.h>
#include <string.h>

int main (int argc, char * argv[]) {
    char lotr[][30]  =  {"Frodo", "Gandalf", "Gimli", "Elrond", "Aragorn"};

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
