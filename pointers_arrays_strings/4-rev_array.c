#include "main.h"
/**
 * reverse_array - Write a function that reverses the content
 *
 * return: void
 *
 * @a: int
 *
 * @n: int
 */
void reverse_array(int *a, int n)
{
	int *b, c, d, temp;

	b = a;

	for (c = 1; c < n; c++)
	{
		b++;
	}

	for (d = 0; d < c / 2; d++)
	{
		temp = a[d];
		a[d] = *b;
		*b = temp;
		b--;
	}
}
