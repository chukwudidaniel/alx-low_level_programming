#include <stdio.h>

/**
 * main - main entry
 * Return: always 0
 */
int main(void)
{
	int count;
	int fib1 = 1, fib2 = 2, sum;

/* Print the first two Fibonacci numbers (1 and 2) */
	printf("%d, %d, ", fib1, fib2);
/* Find and print the next 96 Fibonacci numbers */
	for (count = 2; count < 98; count++)
	{
		sum = fib1 + fib2;
		printf("%d", sum);

/* Add a comma and space unless it's the last number */
	if (count < 97)
	{
		printf(", ");
	}
	else
	{
		printf("\n");
	}

/* Update fib1 and fib2 for the next iteration */
	fib1 = fib2;
	fib2 = sum;
	}
	return (0);
}
