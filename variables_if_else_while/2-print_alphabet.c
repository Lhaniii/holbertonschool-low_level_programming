#include <stdio.h>
/**
 * main - Alphabet
 *
 * Return: Always (succes)
 */

int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}

	putchar('\n');
	return (0);
}
