#include <stdio.h>

int main() {
    char letter;

    // Print lowercase alphabet
    for (letter = 'a'; letter <= 'z'; letter++) {
        putchar(letter);
    }

    // Print uppercase alphabet
    for (letter = 'A'; letter <= 'Z'; letter++) {
        putchar(letter);
    }

    // Print a new line
    putchar('\n');

    return 0;
}

