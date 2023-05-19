#include <stdio.h>

int main() {
    char letter;

    // Print the alphabet in lowercase (excluding 'q' and 'e')
    for (letter = 'a'; letter <= 'z'; letter++) {
        if (letter != 'q' && letter != 'e') {
            putchar(letter);
        }
    }

    // Print a new line
    putchar('\n');

    return 0;
}

