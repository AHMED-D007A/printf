#include "main.h"
/**
 * _putstring - print a string to stdo.
 * @str: the string.
 * Return: the number of charaters in the string.
*/
int _putstring(const char *str)
{
	int i = 0;

	while (*str)
		i += _putchar(*str++);

	return (i);
}
