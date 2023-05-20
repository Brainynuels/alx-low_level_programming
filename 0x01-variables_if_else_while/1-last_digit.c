#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("Last digit of %d is 8 ", n);
	if (n % 10 > 5)
		printf("and is greater than 5\n");
	else if (n % 10 == 0)
		printf("0; and is 0\n");
	else
		printf("-8; and is less than 6 and not 0\n");
		printf("Last digit of %d is -8 and is less than 6 and not 0\n");
	return (0);
}
