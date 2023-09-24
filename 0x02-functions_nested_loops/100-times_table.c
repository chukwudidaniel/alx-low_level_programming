#include <stdio.h>

/**
 * print_times_table - prints the time table for n from 0
 * @n: the number of interest
 */

void print_times_table(int n)
{
	if (n < 0 || n > 15)
	{
		return;
	}

	int i, j;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			int result = i * j;

			if (j == 0)
			{
				printf("%2d", result);
			}
			else
			{
				printf(", %2d", result);
			}
		}
		printf("\n");
	}
}

/**
 * main - Entry point of the program
 * Return: 0 on success
 */

int main(void)
{
	int n = 12;

	print_times_table(n);
	return (0);
}
