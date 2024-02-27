#include "main.h"
/**
 * print_square - print square with #
 * return: 0
 * @size: size of square
 */
void print_square(int size)
{
	int d, s;

	if (size < 0)
	{
		_putchar('\n');
	}
	else
	{
		for (d = 0; d < size; d++)
		{

			for (s = 0; s < size; s++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
