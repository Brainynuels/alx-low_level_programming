#include <stdio.h>

int main(void)
{
    int i, j;

    for (i = 0; i <= 99; i++)
    {
        for (j = i; j <= 99; j++)
        {
            putchar(i / 10 / 10 % 10 + '0');
            putchar(i / 10 % 10 + '0');
            putchar(i % 10 + '0');
            putchar(' ');
            putchar(j / 10 / 10 % 10 + '0');
            putchar(j / 10 % 10 + '0');
            putchar(j % 10 + '0');
            putchar(',');
            putchar(' ');
        }
    }

    return 0;
}
