#include "main.h"
/**
 * _strncat - Write a function that concatenates two strings.
 *
 * Return: dest
 *
 * @dest: pointer
 *
 * @src: pointer
 *
 * @n: int
 */
char *_strncat(char *dest, char *src, int n)
{
	int a = 0, b = 0;

	while (dest[a])
	{
		a++;
	}

	while (b < n && src[b])
	{
		dest[a] = src[b];
		a++;
		b++;
	}

	dest[a + n + 1] = '\0';

	return (dest);
}
