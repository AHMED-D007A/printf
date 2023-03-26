#include "main.h"
#include <stdarg.h>
/**
 * case_c - handle the charater format.
 * @ap: pointer to the variadic list
 * Return: number of the charater.
*/
int case_c(va_list ap)
{
	return (_putchar(va_arg(ap, int)));
}
/**
 * case_s - handle the string format.
 * @ap: pointer point to a list.
 * Return: the number or charaters in the string.
*/
int case_s(va_list ap)
{
	char *str = va_arg(ap, char *);

	if (!str)
		return (put_string("(null)"));

	return (put_string(str));
}
/**
 * case_mod - handle the modules format.
 * @ap: pointer point to the variadic list.
 * Return: the number of charaters.
*/
int case_mod(va_list ap __attribute__((unused)))
{
	return (_putchar('%'));
}
