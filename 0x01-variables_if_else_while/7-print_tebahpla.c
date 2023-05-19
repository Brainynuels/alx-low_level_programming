#include <stdio.h>

int main() {
    char letter;

    // Print the alphabet in reverse
    for (letter = 'z'; letter >= 'a'; letter--) {
        putchar(letter);
    }

    // Print a new line
    putchar('\n');

    return 0;
}

