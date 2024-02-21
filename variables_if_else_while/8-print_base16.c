#include<stdio.h>
/**
 * main - hexadecimal
 *
 * Return: Always (succes)
 */
int main(void)
{
	char number;

	for (number = '0'; number <= '9'; number++)
		putchar(number);

	for (number = "61"; number <= "66"; number++)
		putchar(number);

	putchar ('\n');
	return (0);
}
