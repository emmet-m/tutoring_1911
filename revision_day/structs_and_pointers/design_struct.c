#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/* A student profile should contain:
 * 1) a name
 * 2) a zid
 * 3) a WAM
 * 4) an array of current subjects (e.g. COMP1911, ENGG1000, ...)
 *
 * Assume a student will always have 4 current subjects.
 *
 * Give the following struct fields that could hold all these values
 *
 * The types of these values are up to you! Just make sure they can
 * correctly hold the data.
 */

// You can change this definition if you wish
typedef struct studentProfile StudentProfile;

struct studentProfile {
    // TODO: fill this in
};

// TODO: Implement these functions.
// If you want to change the return types/paramaters, you can!

// Reads a student profile in from stdin, returning a new StudentProfile
// Check studentData.txt for an example of the data format.
StudentProfile readStudent();

// Prints a student profile back out (in the same format as read in)
void printStudent(StudentProfile p);

// Deletes a student profile.
// If you use malloc anywhere in readStudent, you will need to 
// free it here.
void destroyStudent(StudentProfile p);

int main (void) {

    // Test your functions here

    return 0;
}

StudentProfile readStudent(){
    StudentProfile p;
    // TODO
    return p;
}

void printStudent(StudentProfile p) {
    // TODO
}

void destroyStudent(StudentProfile p) {
    // TODO
}
