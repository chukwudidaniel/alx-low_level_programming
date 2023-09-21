#include "main.h"

/**
 * _strncat - Concatenates two strings.
 * @dest: The destination string.
 * @src: The source string.
 * @n: no of element to concertenate from src
 * Description: This function appends the src string to the dest string,
 * overwriting the terminating null byte ('\0') at the end of dest
 * Return: dest + n of src
 */
char *_strncat(char *dest, char *src, int n)
{
	int len_dest, i;

	for (len_dest = 0; dest[len_dest] != '\0'; len_dest++)
	{

	}
	for (i = 0; src[i] != 0 && i < n; i++)
	{
		dest[len_dest + i] = src[1];
	}
	return (dest);
}
