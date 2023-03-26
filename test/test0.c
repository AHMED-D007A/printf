#include "main.h"
/**
 * main - main block.
 * Return: 0
*/
int main(void)
{
	int r;
	r = _printf("1) The first character of my name is %c\n", 'A');
	printf("the length is: %d\n", r);
	r = _printf("2) My name is %s\n", "Ahmed");
	printf("the length is: %d\n", r);
	r = _printf("3) this is a modules %%\n");
	printf("the length is: %d\n", r);

	return (0):
}
