#include "main.h"
/**
 * _strcpy - Copy a string
 *
 * Return: dest
 *
 * @dest: Destination value
 *
 * @src: source value
 */
char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}

	dest[a++] = '\0';

	return (dest);
}
