#include <stdio.h>

/**
 * main - main entry
 * Description: printing single digits of base 10
 * Return: always 0
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
	/* 0 is added to each n to avoid printing their ascii value */
		putchar(n + '0');
	}
	putchar('\n');

	return (0);
}

