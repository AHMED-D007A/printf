#ifndef _MAIN_H_
#define _MAIN_H_
#include <stddef.h>
#include <stdarg.h>

/* main functions :) */
int _printf(const char *format, ...);
int _putchar(const char c);
int _putstring(const char *str);
void str_rev(char *str, int len);

/* type definitions :) */
typedef int (*format_f)(va_list);
/**
 * struct format - structer denfinetion of the format.
 * @fcase: the cases of the format
 * @fun: the pointed function that point to the function case.
*/
typedef struct format
{
	char fcase;
	format_f fun;
} format_s;

/* format the functions */
int case_c(va_list ap);
int case_s(va_list ap);
int case_mod(va_list ap);
int case_num(va_list ap);
int case_binary(va_list ap);

#endif
