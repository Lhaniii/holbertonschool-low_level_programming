#include "main.h"
/**
 * main - print alphabet
 * Return: Always (succes)
 *
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		_putchar(alphabet);

	_putchar('\n');

	return (0);
}
