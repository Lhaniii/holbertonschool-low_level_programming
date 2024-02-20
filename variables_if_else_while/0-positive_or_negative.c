#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (succes)
 */
int main(void)
{
	int x;

	srand(time(0));
	x = rand() - RAND_MAX / 2;

	printf("%d \n", x);

	if (x > 0)

	{
		printf("The number is positive \n");
	}
	else if (x < 0)
	{
		printf("the number is nefative \n");
	}
	else
	{
		printf("The number is zero \n");
	}
	return (0);
}
