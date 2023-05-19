#include <stdio.h>

int main() {
    int number;

    // Print numbers of base 16 in lowercase
    for (number = 0; number < 10; number++) {
        putchar('0' + number);
    }
    for (number = 0; number < 6; number++) {
        putchar('a' + number);
    }

    // Print a new line
    putchar('\n');

    return 0;
}

