#include <stdio.h>

int main(void)
{
    int i, j;

    for (i = 0; i <= 8; i++)
    {
        for (j = i + 1; j <= 9; j++)
        {
            putchar(i / 10 + '0');
            putchar(i % 10 + '0');
            putchar(',');
            putchar(' ');
            putchar(j / 10 + '0');
            putchar(j % 10 + '0');
            putchar('\n');
        }
    }

    return 0;
}
