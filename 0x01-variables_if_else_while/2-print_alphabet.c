#include <stdio.h>

int main() {
    int i;

    // Print the alphabet in lowercase using putchar
    for (i = 0; i < 26; i++) {
        putchar('a' + i);
    }

    // Print a new line using putchar
    putchar('\n');

    return 0;
}

