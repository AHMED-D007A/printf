#include "main.h"
#include <stdio.h>
/**
 * _putstring - print a string to stdo.
 * @str: the string.
 * Return: the number of charaters in the string.
*/
int _putstring(char *str)
{
	int i = 0;

	while (*str)
		i += pchar(*str++);

	return i;
}
