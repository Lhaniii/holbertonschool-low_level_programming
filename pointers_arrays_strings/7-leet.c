#include "main.h"
/**
 * leet - Write a function that encodes a string into 1337.
 *
 * Return: s
 *
 * @s: string
 */
char *leet(char *s)
{
	int a = 0, b = 0, c = 5;
	char st[5] = {'A', 'E', 'O', 'T', 'L'};
	char sr[5] = {'4', '3', '0', '7', '1'};

	while (s[a])
	{
		b = 0;

		while (b < c)
		{
			if (s[a] == st[b] || s[a] - 32 == st[b])
			{
				s[a] = sr[b];
			}

			b++;
		}
		a++;
	}
	return (s);
}
