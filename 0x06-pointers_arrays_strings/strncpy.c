#"include "main.h"

/**
 * _strncpy -copies a string
 * 
 * @dest: destination string
 * @n: no of strains to copy
 * @src: sourc string
 * Return: return dest char pointer to the string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{

		dest[i] = src[i];
	}
