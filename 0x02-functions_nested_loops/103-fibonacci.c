#include <stdio.h/>

/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	int fib1 = 1, fib2 = 2, sum = 0;

	while (fib2 <= 4000000)
	{
		/* Check if fib2 is even */
		if (fib2 % 2 == 0)
		{
			sum += fib2;
		}

/* Calculate the next Fibonacci number */
	int temp = fib2;

	fib2 = fib1 + fib2;
	fib1 = temp;
	}

	printf("The sum of even Fibonacci terms is: %d\n", sum);

	return (0);
}
