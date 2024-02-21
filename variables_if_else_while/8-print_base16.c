#include<stdio.h>
/**
 * main - hexadecimal
 *
 * Return: Always (succes)
 */
int main(void)
{
	int number;
	{
	for (number = '0'; number <= '9'; number++)
		putchar(number);
	}
	char letter;
	{
	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);
	}

	putchar ('\n');
	return (0);
}
