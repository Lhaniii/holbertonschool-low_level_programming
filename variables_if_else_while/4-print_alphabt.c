#include <stdio.h>
/**
 * main - Alphabet
 *
 * Return : Always (succes)
 */

int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)

		if (alphabet != 'e' && alphabet != 'q')
			putchar(alphabet);

	putchar('\n');

	return (0);
}
