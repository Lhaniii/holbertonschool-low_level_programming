#include "main.h"
/**
 * more_numbers: prints 10 times the numbers, from 0 to 14, followed by a new line.
 * Return: 0
 */
void more_numbers(void)
{
	int n, n1;

	for (n = '0'; n <= '9'; n++)
	{
		for (n1 = 0; n1 <= 14; n++)
			_putchar(n1 + '0');
	}
	_putchar(n);
	_putchar('\n');
}
