#include "main.h"
/**
 * rot13 - Encodes a string using ROT13.
 * @str: The input string to be encoded.
 * Return: Resulting ROT13-encoded string.
 */
char *rot13(char *str)
{
	int i, j;
	char c[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char d[] = "NOPQRSTUVWZYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; j++)
	{
		for (j = 0; c[j] != '\0'; j++)
		{
			if (str[i] == c[j])
			{
				str[i] = d[j];
				break;
			}
		}
	}
	return (str);
}
