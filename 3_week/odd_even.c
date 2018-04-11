#include <stdio.h>

#define EVEN_REMAINDER 0

int main (void) {

	int num;

	printf("Please enter an integer: ");
	scanf("%d", &num);

	if (num % 2 == EVEN_REMAINDER) {
		printf("EVEN\n");
	} else {
		printf("ODD\n");
	}

    return 0;
}
