#include <stdio.h>

/**
 * main - using putchar
 *
 * Return: Always 1 (Error)
 */
int main(void)
{
        char *quote = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
        int i = 0;

        while (quote[i] != '\0')
        {
                putchar(quote[i]);
                i++;
        }

        return (1);
}
