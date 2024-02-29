#include "main.h"
/**
 * rev_string - revers string
 * Return: 0
 * @s: pointer
 */
void rev_string(char *s)
{
	int t, u;
	char c;

	for (t = 0, u = _strlen(s) - 1; t < u; t++, u--)
	{
		c = s[t];
		s[t] = s[u];
		s[u] = c;
	}
}
