#include "main.h"
/**
 * print_line - print line
 * Return: 0
 * @n: int
 */
void print_line(int n)
{
	int y;

	if (n <= 0)
	{
		_putchar ('\n');

	}
	else
	{
		for (y = 0; y < n ; y++)
		{
		_putchar('_');
		}

		_putchar('\n');
	}

}
