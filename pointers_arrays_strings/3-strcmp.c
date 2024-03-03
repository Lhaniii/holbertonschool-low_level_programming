#include "main.h"

/**
 * _strcmp - Write a function that compares two strings.
 *
 * Return: r
 *
 * @s1: int
 *
 * @s2: int
 */
int _strcmp(char *s1, char *s2)
{
	int a = 0, b = 0, c = 0, d = 0, temp;

	while  (s1[a])
	{
		a++;
	}

	while (s2[b])
	{
		b++;
	}

	if (a <= b)
	{
	temp = a;
	}
	else
	{
	temp = b;
	}
	while (c <= temp)
	{
		if (s1[c] == s2[c])
		{
			c++;
			continue;
		}
		else
		{
			d = s1[c] - s2[c];
			break;
		}

		c++;
	}

	return (d);
}
