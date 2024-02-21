#include<stdio.h>
/**
 * main - prints all possible cominations of single-digit numbers with ,
 *
 * Return: Always (succes)
 */
int main(void)
{
	int number;

	for (number = '0'; number <= '9'; number++)
		if (number < 9)
		{
			putchar(',');
			putchar(' ');
		}
	putchar('\n');
	return (0);
}
