#include <stdio.h>
#include <time.h>
/* more headers goes there */
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("%d \n", x);

	if (n > 0)
	{
		printf(n "is positive \n");
	}
	else if (x < 0)
	{
		printf(n "is negative \n");
	}
	else
	{
		printf(n "is zero \n");
	}
	return (0);
}
