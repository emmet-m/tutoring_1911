#include <stdio.h>

int main (void) {
	int currentAge;
	int nextBirthday;

	printf("Please enter your age: ");
	scanf("%d", &currentAge);

	printf("On your next birthday you will turn %d\n", currentAge + 1);

	return 0;
}
