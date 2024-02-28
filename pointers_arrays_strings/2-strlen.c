#include "main.h"
/**
 * strlen - returns the length of a string.
 * Return: 0
 * @s: pointer
 */
int _strlen(char *s)
{
	int b = 0;

	while (*s != '\0')
	{
		b++;
		s++;
	}

	return (b);
}
