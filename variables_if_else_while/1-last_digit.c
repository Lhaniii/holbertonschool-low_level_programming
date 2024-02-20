#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - The last digit
 *
 * Return: Always 0(succes)
 */
int main(void)
{
	int n, y;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	y = n % 10;

	printf("%d", n);
	if (y > 5)
	{
		printf("Last digit of %d and is greater than 5 and not 0\n, n," y);
	}
	else if (y < 5)
	{
		printf("last digit %d and is less than 5 and not 0\n, n," y);
	}
	else if (y == 0)
	{
		printf("last digit of %d and is 0\n, n," y);
	}
	return (0);
}
