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
	int a, b;

	for (a = 0; dest[a]; a++)

	if (b < n && src[b])
	{
		dest[a] = src[b];
		a++;
		b++;
	}

	dest[a + n + 1] = '\0';

	return (dest);
}
