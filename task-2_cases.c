#include "main.h"
#include <stdarg.h>
/**
 * case_binary - handle the binary format.
 * @ap: pointer list
 * Return: the number of the charater.
*/
int case_binary(va_list ap)
{
	int val, i, l,counter = 0;

	val = va_arg(ap, int);
	for (i = 0; val != 0; )
	{
		l = val % 2;
		_putchar(l + '0');
		val / 2;
		counter++;
	}
	_putchar('\0');
	counter++;

	return (counter);
}
