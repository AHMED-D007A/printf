#include <stdarg.h>
#include "main.h"

/**
 * case_num - handles conversion specifier 'd'
 * @ap: list of arguments
 *
 * Return: number of characters printed
 */
int case_num(va_list ap)
{
    int i = 0, sign = 0;
    char info[12]; /* max int is 10 chars (2,147,483,647) */
    int val = va_arg(ap, int);

    if (val < 0)
    {
        val = -val;
        sign = 1;
        info[i++] = '-';
    }

    while (val || !i)
    {
        info[i++] = val % 10 + '0';
        val /= 10;
    }
    info[i] = '\0';

    str_rev(info + sign, i - sign - 1);
    return _putstring(info);
}

