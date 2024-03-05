#include "main.h"
/**
 * _strpbrk - Write a function that searches a string for any of a set of bytes
 *
 * Return: '\0'
 *
 * @s: char
 *
 * @accept: char
 */
char *_strpbrk(char *s, char *accept)
{
	int a = 0, b;

	while (s[a])
	{
		b = 0;

		while (accept[b])
		{
			if (s[a] == accept[b])
			{
				s += a;
				return (s);
			}

			b++;
		}

		a++;
	}

	return ('\0');
}
