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
	if (*s > '\0')
	{
		_putchar(s + 1);
		_putchar(*s);
	}
}
