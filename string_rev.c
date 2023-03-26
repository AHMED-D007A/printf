#include "main.h"
#include <stdio.h>
/**
 * str_rev - reverse an array of charaters.
 * @str: the string.
 * @len: the length of the string.
 * Return: nothing.
*/
void str_rev(char *str, int len)
{
	char *p;

	for (p = str + len; str < p; str++, p--)
	{
		*str ^= *p;
		*p ^= *str;
		*str ^= *p;
	}
}
