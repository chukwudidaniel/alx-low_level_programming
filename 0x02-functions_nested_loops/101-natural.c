#include <stdio.h>

/**
 * main - Main Entry point
 *Return: Always 0
 */

int main(void)
{
	int sum = 0;

	for (int i = 1; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}

	printf("%d\n", sum);

	return (0);
}
