#include "main.h"
/**
 * print_sign - print 1 0 and -1
 * Return: Always (succes)
 * @n: int
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	{
		_putchar('-');
		return (-1);
	}
}
