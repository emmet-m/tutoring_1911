#define MAX_PLATE 10

#include <stdlib.h>
#include <stdio.h>


typedef struct parkingFine ParkingFine;

struct parkingFine{
    double amount;
    char numberPlate[MAX_PLATE];
};


int readParkingFine ( ParkingFine * fine );

int main(void){
    ParkingFine f;
    if(readParkingFine(&f) == 1){
        printf("%lf %s\n",f.amount, f.numberPlate);
    } else {
        fprintf(stderr,"Invalid Input\n");
        return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
}

// Returns 1 if valid input was read in
// Returns 0 otherwise
int readParkingFine ( ParkingFine * fine ){
    if ( scanf("%lf", &fine->amount) != 1 ||
            fgets(fine->numberPlate,MAX_PLATE,stdin) == NULL){
        return 0;
    } else {
        return 1;
    }
}
