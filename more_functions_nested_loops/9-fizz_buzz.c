#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * fizz buzz - fizz buzz
 * Return: 0:
 */
int main(void)
{
	int n;

	for (n = 0; n <= 100; n++)
	{
		if ((n % 3) == 0 && (n % 5) == 0)
		{
			printf("FizzBuzz");
		}
			else if ((n % 3) == 0)
		{
			printf("Fizz");
		}
		else if ((n % 5) == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d" , n);
		}
		if (n != 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}