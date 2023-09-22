#include <stdio.h>

/**
 * main - main entry
 * decription: printing alphabets in lower case execept e and q
 * Return: Always 0
 */
int main(void)
{
	char p = 'a';

	while (p <= 'z')
	{
		if (p == 'e' || p == 'q')
		{
			p++;
			continue;
		}
		putchar(p);
		p++;
	}
	putchar ('\n');
	return (0);
}
