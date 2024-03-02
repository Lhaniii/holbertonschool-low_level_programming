#include "main.h"
/**
 * _strcat - Write a function that concatenates two strings.
 *
 * Return: dest
 *
 * @dest: pointer
 * @src: pointer
 */
char *_strcat(char *dest, char *src)
{
	int a = 0, b;

	while (dest[a])
	{
		a++;
	}

	for (b = 0; src[b] != 0; b++)
	{
		dest[a] = src[b];
		a++;
	}

	dest[a] = '\0';
	return (dest);
}
