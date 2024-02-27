#include "main.h"
/**
 * print_triangle - print square with #
 * return: 0
 * @size: size of square
 */
void print_triangle(int size)
{
	int d;
	int s;

	if (size > 0)
	{
		for (d = 0; d < size; d++)
		{
			for (s = size - d; s > 1 ; s--)
			{
				_putchar(' ');
			}
			for (s = 0; s <= d; s++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
	_putchar('\n');

	}
}
