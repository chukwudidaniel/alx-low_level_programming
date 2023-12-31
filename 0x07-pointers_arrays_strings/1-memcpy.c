#include "main.h"

/**
 * _memcpy - a function that copies memory area
 * @dest: memory for storage
 * @src: Copy memory
 * @n: number of bytes
 *
 * Return: copied memory with n bytes changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}

