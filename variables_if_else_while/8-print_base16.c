#include<stdio.h>
/**
 * main - hexadecimal
 *
 * Return: Always (succes)
 */
int main(void)
{
	char number = 0;

	for (number = '0'; number >= '15'; number++)
		putchar(number);

	putchar('\n');

	return (0);
}
