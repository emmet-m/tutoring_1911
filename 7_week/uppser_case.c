#include <stdio.h>

// These are the same, but the second provides more context.
#define DIFF_CAPS 32
#define DIFF_CHARS ('a' - 'A')

int main (void) {

    char c;

    c = getchar();
    while (c != EOF) {
        if (c <= 'z' && c >= 'a') {
            c = c - DIFF_CHARS;
        }
        putchar(c);
        c = getchar();
    }

    return 0;
}
