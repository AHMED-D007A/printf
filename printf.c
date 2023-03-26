#include "main.h"
/**
 * _printf - a clone sample that work like printf.
 * @format: reference to the formating of the string.
 * Return: number of the charater that will be given.
*/
int _printf(const char *format, ...)
{
	int i, counter = 0;
	va_list ap;

	/* array of format cases and their handling functions */
	format_s formats[] = {
	{ 'c', case_c }, { 's', case_s }, { '%', case_mod },
	{ 'i', case_num }, { 'd', case_num },
	{ 'd', case_binary }, { 0, NULL },
	};

	va_start(ap, format);
	for (; *format; format++)
	{
		/* print ordinary characters */
		if (*format != '%')
		{
			_putchar(*format);
			counter++;
			continue;
		}

		format++;
		/* print formats */
		for (i = 0; formats[i].fcase; i++)
		{
			/* detect the format case */
			if (formats[i].fcase == *format)
			/* execute the format handling function */
			counter += formats[i].fun(ap);
		}
	}
	va_end(ap);
	return (counter);
}
