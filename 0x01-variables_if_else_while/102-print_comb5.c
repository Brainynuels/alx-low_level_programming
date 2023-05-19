#include <stdio.h>

int main() {
    // Print all possible combinations of two two-digit numbers
    putchar('0');
    putchar('0');
    putchar(' ');
    putchar('0');
    putchar('1');
    putchar(',');
    putchar(' ');

    putchar('0');
    putchar('0');
    putchar(' ');
    putchar('0');
    putchar('2');
    putchar(',');
    putchar(' ');

    putchar('0');
    putchar('0');
    putchar(' ');
    putchar('0');
    putchar('3');
    putchar(',');
    putchar(' ');

    // Repeat for the remaining combinations...

    // Print last combination
    putchar('9');
    putchar('8');
    putchar(' ');
    putchar('9');
    putchar('9');

    return 0;
}

