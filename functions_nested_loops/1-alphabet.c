#include "main.h"
/**
 * main - print alphabet
 * Return: Always (succes)
 *
 */
void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		_putchar(alphabet);

	_putchar('\n');

}
