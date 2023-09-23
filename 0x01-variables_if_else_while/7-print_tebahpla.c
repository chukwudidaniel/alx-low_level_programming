#include <stdio.h>
/**
 * main - main entry
 * Description: printing lowercase alphabets in reverse
 * Return: always 0
 */
int main(void)
{
	int letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
