#include <stdio.h>

long long fact(int n);

int main (void){
    int input;
    scanf("%d", &input);

    printf("%lld\n", fact(input));

    return 0;
}

long long fact(int n) {
    long long result = 1;
    int i = 1;
    
    while (i <= n) {
        result = result * i;
        i++;
    }

    return result;
}


