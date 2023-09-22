#include <stdio.h>
/**
 * main - Entry point
 * Description: Printing alphabet in lowercase and uppercase, and a new line
 * Return: Always 0 (success)
 */
int main(void)
{
	char letter = 'a';
	
	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}

	letter = 'A';

	while (letter <= 'Z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
