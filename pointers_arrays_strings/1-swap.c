#include "main.h"
/**
 * swap_int - swap int
 * Return: 0
 * @a: int
 * @b: int
 */
void swap_int(int *a, int *b)
{
	int temp = *b;

	*b = *a;
	*a = temp;
}
