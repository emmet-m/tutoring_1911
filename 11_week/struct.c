#include <stdio.h>
#include <stdlib.h>

typedef struct pet Pet;
typedef struct date Date;

struct date {
    int date;
    int month;
    int year;
};

struct pet {
    char * name;
    Date dateOfBirth;
    char * breed;
};

void printPet(Pet p);
void printDate(Date d);

int main (void) {

    Pet borris;
    borris.name = "Borris";
    borris.dateOfBirth.date = 31;
    borris.dateOfBirth.month = 4;
    borris.dateOfBirth.year = 1996;
    borris.breed = "dog";

    printPet(borris);

    return EXIT_SUCCESS;
}


void printPet(Pet p) {

    printf("%s is born on ", p.name);
    printDate(p.dateOfBirth);
    printf(" and is a %s\n", p.breed);

}

void printDate(Date d) {

    printf("%d/%d/%d", d.date, d.month, d.year);
}
