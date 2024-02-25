#include "main.h"
/**
 * times_table - table of 9
 * Return: nothing
 */
void times_table(void)
{
	int n1, n2, n3, n4, n5;

	for (n1 = 0; n1 <= 9; n1++)
	{
		for (n2 = 0; n2 <= 9; n2++)
		{
			n3 = n1 * n2;

			if (n3 > 9)
			{
				n4 = n3 % 10;
				n5 = (n3 - n4) / 10;

				_putchar(44);
				_putchar(32);
				_putchar(n5 + '0');
				_putchar(n4 + '0');
			}
			else
			{
				if (n2 != 0)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
				}

				_putchar(n3 + '0');
			}
		}

		_putchar('\n');
	}
}
