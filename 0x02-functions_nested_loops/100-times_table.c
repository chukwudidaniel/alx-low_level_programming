#include <stdio.h>

/**
 * print_times_table - prints the time table for n from 0
 * @n: the number of interest
 * Return: always 0
 */
void print_times_table(int n)
{
	if (n < 0 || n > 15)
	{
		return; /* Return early if n is out of range */
	}

	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			int result = i * j;

			if (j == 0)
			{
		/* Print with leading space for single-digit numbers */
				printf("%2d", result);
			}
			else
			{
		/* Print with leading space for single-digit numbers */
				printf(", %2d", result);
			}
		}
		printf("\n"); /* Move to the next row */
	}
}

int main(void)
{
	int n = 12; /* Change n to the desired value (e.g., 12) */

	print_times_table(n);
	return (0);
}
