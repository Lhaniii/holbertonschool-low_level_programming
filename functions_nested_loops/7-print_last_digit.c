#include "main.h"
/**
 * print_last_digit - print last digit of number
 *
 * Return: Always (succes)
 *@n: last digit
 */
int print_last_digit(int n)
{
	int y;

	y = n % 10;

	if (y < 0)
	{
		y = y * -1;
	}

	_putchar(y + '0');

	return (y);
}
