#include <stdio.h>

int main(void)
{
    int i, j, k, l;

    for (i = 0; i <= 9; i++)
    {
        for (j = i + 1; j <= 9; j++)
        {
            for (k = j + 1; k <= 9; k++)
            {
                for (l = k + 1; l <= 9; l++)
                {
                    putchar(i + '0');
                    putchar(',');
                    putchar(' ');
                    putchar(j + '0');
                    putchar(',');
                    putchar(' ');
                    putchar(k + '0');
                    putchar(',');
                    putchar(' ');
                    putchar(l + '0');
                    putchar('\n');
                }
            }
        }
    }

    return 0;
}
