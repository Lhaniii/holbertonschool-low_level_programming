#include "main.h"
#include "main.h"
/**
 * print_rev - prints a string, followed by a new line
 * Return: 0
 * @s: pointer
 */
void print_rev(char *s)
{
	if (*s > '\0')
	{
	print_rev(s + 1);
	_putchar(*s);
	}
}
