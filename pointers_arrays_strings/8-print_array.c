#include "main.h"
#include <stdio.h>
/**
 * print_array -  starting with the first character, followed by a new line.
 *
 * Return: void
 *
 * @a: pointer
 *
 * @n: pointer
 */
void print_array(int *a, int n)
{
	int b;

	for (b = 0; b < n; b++)
	{
		printf("%d", a[b]);
		if (b != (n - 1))
		printf(", ");
	}

	printf("\n");
}
