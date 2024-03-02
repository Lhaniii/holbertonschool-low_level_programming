#include "main.h"
/**
 * _strncpy - Copy a string
 *
 * Return: dest
 *
 * @dest: Destination value
 *
 * @src: source value
 *
 * @n: int
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a, b = 0 ;

	for (a = 0; src[a]; a++)
	
	while (b < n && src[b])
	{
		dest[b] = src[b];
		b++;
	}
	
	if (b < n)
	{
		dest[b] = '\0';
		b++;
	}

	return (dest);
}
