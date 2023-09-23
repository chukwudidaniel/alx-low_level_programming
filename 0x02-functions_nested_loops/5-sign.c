#include "main.h"

/**
 * print_sign - Print sign of numbers
 * @n: The nmber
 * Return: Return 1 or 0, as the case may be
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
