#include <stdlib.h>
#include <stdio.h>

// TODO: Write a typedef here for the below struct
struct data {
    int size;
    double * text;
};

// Make sure to change this prototype too!
void makeData(int requestedSize);

int main (void) {

    // replace these definitions with the typedef you create above
    struct data * myData = NULL;

    // TODO: Here, use makeData to initialise the above variable

    checkStruct(myData);

    return 0;
}

// The return type of this function may not work for what we need...
// Can we fix it?
void makeData(int requestedSize) {

    // This function should:
    // 1) Make a new struct data
    // 2) Initialise the array and size in it
    // 3) Fill it with zeroes
    // 4) Return a pointer to it

}

void checkStruct(struct * data input) {
    int i = 0;
    for (; i < input->size; i++) {
        if (input->text[i] != 0) {
            printf("Error: struct array not intialised to 0!");
            exit(1);
        }
    }
} 


