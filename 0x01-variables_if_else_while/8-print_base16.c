#include <stdio.h>
/**
 * main - Main entry
 * Description: Printing all base 16 numbers
 * return: Always 0
 */
int main(void)
{
	int p;
	int q;

	for (p = 48; p <= 57; p++)
	{
		putchar(p);
	}

	for (q = 97; q <= 102; q++)
	{
		putchar(q);
	}
	putchar('\n');

	return (0);
}
