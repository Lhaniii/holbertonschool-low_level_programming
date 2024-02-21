#include<stdio.h>
/**
 * main - alphabet in mirror
 *
 * Return: Always (succes)
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'z' ; alphabet <= 'a' ; alphabet++)
		putchar(alphabet);

	puthcar('\n');

	return (0);
}
