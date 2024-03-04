#include "main.h"
/**
 * _memset - Write a function that fills memory with a constant byte.
 *
 * @s: char
 *
 * @b: char
 *
 * @n: int
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a ;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}

	return (s);
}
