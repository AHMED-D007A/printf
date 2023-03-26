#include "main.h"
#include <unistd.h>
/**
 * _putchar - return a charater to stdo.
 * @c: the given charater.
 * Return: the charater.
*/
int _putchar(char c)
{
	return (write(1, &c, 1) > 0 ? 1 : 0);
}
