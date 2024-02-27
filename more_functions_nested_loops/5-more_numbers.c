#include "main.h"
/**
 * more_numbers: prints 10 times the numbers, from 0 to 14.
 * Return: 0
 */
void more_numbers(void)
{
	int n, n1;

	for (n = 0; n <= 9; n++)
	{
		for (n1 = 0; n1 <= 14; n1++)
		{
			if (n1 >= 10 && n1 <= 14)
			_putchar(n1 / 10 + '0');
			_putchar(n1 % 10 + '0');
		}
		_putchar ('\n');
	}
}
