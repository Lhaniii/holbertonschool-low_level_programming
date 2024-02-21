#include<stdio.h>
/**
 * main - hexadecimal
 *
 * Return: Always (succes)
 */
int main(void)
{
	int number;
	int letter;

	for (number = '0'; number <= '9'; number++)
		putchar(number);

	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);


	putchar ('\n');
	return (0);
}
