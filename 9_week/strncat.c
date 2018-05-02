#include <stdio.h>
#include <string.h>

void mystrncat(char str1[], char str2[], int n);

int main (int argc, char * argv[]) {
    char str2[] = "Hello!";
    char str1[50] = {'h','i','\0'};
    mystrncat(str1, str2, strlen(str2) - 1);
    printf("%s\n", str1);

}

void mystrncat(char str1[], char str2[], int n) {
    // Two counters, i for str2, j for str1
    int i = 0;
    int j = strlen(str1);
    // Start at end of str1
    while (str2[i] != '\0' && i < n) {
        str1[j] = str2[i];
        i++;
        j++;
    }
    str1[j] = '\0';
    return;
}
