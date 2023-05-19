#include <stdio.h>

int main() {
    int number;

    // Print single-digit numbers from 0 to 9
    for (number = 0; number < 10; number++) {
        putchar('0' + number);
    }

    // Print a new line
    putchar('\n');

    return 0;
}

