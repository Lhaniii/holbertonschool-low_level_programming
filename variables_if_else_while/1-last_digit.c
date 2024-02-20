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
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("%d", n);

	if ((n % 10) > 5)
	{
		printf("Last digit of %d and is greater than 5 and not 0\n", n, n % 10);
	}
	else if ((n % 10) < 5)
	{
		printf("last digit %d and is less than 5 and not 0\n", n, n % 10);
	}
	else
	{
		printf("last digit of %d and is 0\n", n, n % 10);
	}
	return (0);
}
