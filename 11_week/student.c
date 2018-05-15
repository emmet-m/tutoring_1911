#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LEN 100

typedef struct student Student;
struct student{
    int zid;
    char name[MAX_LEN];
};

Student * findStudent(Student class[], int size, int zid);   

int main (void) {
    Student e;
    strcpy(e.name, "Emmet Murray");
    e.zid  = 5059840;

    Student v;
    strcpy(v.name, "Victoria Xu");
    v.zid  = 5078972;

    Student c;
    strcpy(c.name, "Conrad Martin");
    c.zid  = 5051123;

    Student myClass[] = {e,v,c};

    Student * culprit = findStudent(myClass, 3, 5059840);

    printf("%s was found!\n", culprit->name);

    return EXIT_SUCCESS;
}

Student * findStudent(Student class[], int size, int zid){

    return NULL;
}
