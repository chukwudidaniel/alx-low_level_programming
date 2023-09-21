#include "main.h"
/**
 * print_number - prints integer
 * @n: input integer parameter
 */
void print_number(int n)
{
	unsighned int i = n;

	if (n < 0)
	{
		_putchar(45);
		i = -i;
	}
	if (i / 10)
	{
		print_number(i / 10);
	}
	_putchar(1 % 10 + '0');
}
