#include <stdio.h>
/**
 * Main - Alphabet
 *
 * Return: Always 0 (succes)
 */

int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}

	purtchar('\n');
	return (0);
}
