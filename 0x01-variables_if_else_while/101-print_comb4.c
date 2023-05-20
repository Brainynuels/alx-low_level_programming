#include <stdio.h>

int main(void)
{
    int i, j, k;

    for (i = 0; i <= 7; i++)
    {
        for (j = i + 1; j <= 8; j++)
        {
            for (k = j + 1; k <= 9; k++)
            {
                putchar(i / 100 + '0');
                putchar((i / 10) % 10 + '0');
                putchar(i % 10 + '0');
                putchar(',');
                putchar(' ');
                putchar(j / 100 + '0');
                putchar((j / 10) % 10 + '0');
                putchar(j % 10 + '0');
                putchar(',');
                putchar(' ');
                putchar(k / 100 + '0');
                putchar((k / 10) % 10 + '0');
                putchar(k % 10 + '0');
                putchar('\n');
            }
        }
    }

    return 0;
}
