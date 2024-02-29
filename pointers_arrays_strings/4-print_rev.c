#include "main.h"

/**
 * print_rev - print in revers
 *
 * Return: void
 *
 * @s: pointer
 */
void print_rev(char *s)
{
	int t = 0;
	while (s[t] != '\0')
	{
	t++;
	}

	for (t -= 1; c >= 0; t--)
	{
		_putchar(s[t]);
	}

	_putchar('\n');
}
