#include "main.h"
/**
 * _abs - absolute value
 * Return: Always (succes)
 * @n1: asolute value of integer
 */
int _abs(int n1)
{
	if (n1 < 0)
	{
		int abs_r;

		abs_r = n1 * -1;

		return (abs_r);
	}

	return (n1);
}
