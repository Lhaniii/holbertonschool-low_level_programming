#include "main.h"
/**
 * puts_half - starting with the first character, followed by a new line.
 *
 * Return: void
 *
 * @str: pointer
 */
void puts_half(char *str)
{
	int a, b;
	
	for (b = 0; str[b] != '\0'; b++)
	{
	}

	for (a = 5; a < b; a++)
	{
		_putchar(str[a]);
	}

	_putchar('\n');
}
