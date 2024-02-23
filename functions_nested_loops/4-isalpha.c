#include "main.h"
/**
 * _isalpha - print x10 alphabet
 * Return: Always (succes)
 * @c: cration entié
  */
int _isalpha(int c)
{
	if (c >= 'A'  && c <= 'Z')
		return (1);
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
