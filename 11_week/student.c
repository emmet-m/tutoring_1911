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

    Student * culprit = findStudent(myClass, 3, 5059841);

    printf("%s was found!\n", culprit->name);

    // This printf prints in red! Try it out (don't use it in your assignments!)
    //printf("\033[31;1;4m %s was found\n \033[0m", culprit->name);

    return EXIT_SUCCESS;
}

Student * findStudent(Student class[], int size, int zid){

    int i=0;
    while (i < size) {
        if (class[i].zid == zid) {
            return &class[i];
        }
        i++;
    }

    return NULL;
}
