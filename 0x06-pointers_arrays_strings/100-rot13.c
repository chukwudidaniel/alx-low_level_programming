#include "main.h"
/**
 * rot13 - Encodes a string using ROT13.
 * @str: The input string to be encoded.
 * Return: A pointer to the resulting ROT13-encoded string.
 */
char *rot13(char *str)
{
	char *p = str; /* p = input */
	char *t = str; /* t = output */
	char rot13_table[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*p)
	{
		char c = *p;

		if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		{
			*t = rot13_table[c - ((c >= 'a' && c <= 'z') ? 'a' : 'A')];
		}
		else
		{
			*t = c;
		}
		p++;
		t++;
	}
	*t = '\0';

	return (str);
}
