#include <stdio.h>

int main (void) {

	int height;

	printf("Please enter your height: ");
	scanf("%d", &height);

	if (height < 120) {
		printf("Sorry, no rides for you!\n");
	} 
	if (height >= 120) {
		printf("Green rides\n");
	}
	
	if (height >= 130) {
		printf("Yellow rides\n");
	}
	if (height >= 140){
		printf("Red rides\n");
	}

    return 0;
}
