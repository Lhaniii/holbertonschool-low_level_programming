#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (succes)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("%d \n", n);

	if (n > 0)

	{
		printf(n "is positive \n");
	}
	else if (n < 0)
	{
		printf(n "is negative \n");
	}
	else
	{
		printf(n "is zero \n");
	}
	return (0);
}
