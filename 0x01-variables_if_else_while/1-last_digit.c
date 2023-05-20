#include <stdio.h>

int main(void)
{
	int n1, n2, n3;
	printf("Enter the first integer: ");
	scanf("%d", &n1);
	printf("Enter the second integer: ");
	scanf("%d", &n2);
	printf("Enter the third integer: ");
	scanf("%d", &n3);
	printf("Last digit of %d is", n1);
	int lastDigit1 = n1 % 10;
	if (lastDigit1 > 5)
		printf(" %d and is greater than 5\n", lastDigit1);
	else if (lastDigit1 == 0)
		printf(" %d and is 0\n", lastDigit1);
	else
		printf(" %d and is less than 6 and not 0\n", lastDigit1);
	printf("Last digit of %d is", n2);
	int lastDigit2 = n2 % 10;
	if (lastDigit2 > 5)
		printf(" %d and is greater than 5\n", lastDigit2);
	else if (lastDigit2 == 0)
		printf(" %d and is 0\n", lastDigit2);
	else
		printf(" %d and is less than 6 and not 0\n", lastDigit2);
	printf("Last digit of %d is", n3);
	int lastDigit3 = n3 % 10;
	if (lastDigit3 > 5)
		printf(" %d and is greater than 5\n", lastDigit3);
	else if (lastDigit3 == 0)
		printf(" %d and is 0\n", lastDigit3);
	else
		printf(" %d and is less than 6 and not 0\n", lastDigit3);
	return 0;
}
