#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * main - Positive or negative number
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("%d", n);

/*≤s la variable n est supp√rieur a zero le nombre est posif*/
	if (n > 0)
	{
		printf(" is positive\n");
	}
/*si la variable n est inf√rieur a zero l nombre est negatif*/
	else if (n < 0)
	{
		printf(" is negative\n");
	}
/*si la variable est = a zero le nombre zero*/
	else
	{
		printf(" is zero\n");
	}
	return (0);
}
