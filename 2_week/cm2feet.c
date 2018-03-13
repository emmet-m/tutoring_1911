#include <stdio.h>

#define CM_PER_INCH 2.54
#define INCH_PER_FOOT 12

int main (void) {

	int centimetres;

	printf("Enter your height in centimetres: ");
	scanf("%d", &centimetres);

	int feet = (centimetres/CM_PER_INCH)/INCH_PER_FOOT;

	printf("Your height in feet: %d\n", feet);
	
	return 0;
}
