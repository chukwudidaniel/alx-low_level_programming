#include "main.h"

/**
 * infinite_add - Adds two numbers as strings.
 * @n1: The first number as a string.
 * @n2: The second number as a string.
 * @r: The buffer to store the result.
 * @size_r: The buffer size.
 *
 * Return: A pointer to the result or 0 if the result cannot fit in r.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = 0, len2 = 0;
	int i, j, k;
	int carry = 0;

	while (n1[len1])
	len1++;
	while (n2[len2])
		len2++;

	if (len1 >= size_r || len2 >= size_r)
		return (0);

	i = len1 - 1;
	j = len2 - 1;
	k = 0;

	while (i >= 0 || j >= 0 || carry)
	{
		int digit1 = (i >= 0) ? n1[i] - '0' : 0;
		int digit2 = (j >= 0) ? n2[j] - '0' : 0;
		int sum = digit1 + digit2 + carry;

	if (k >= size_r - 1)
		return (0);

		r[k] = (sum % 10) + '0';
		carry = sum / 10;

		i--;
		j--;
		k++;
	}

	r[k] = '\0';
	reverse_string(r);
	return (r);
}

/**
 * reverse_string - Reverses a string in-place.
 * @str: The string to reverse.
 */
void reverse_string(char *str)
{
	int len = 0;
	int i, j;
	char temp;

	while (str[len])
		len++;

	for (i = 0, j = len - 1; i < j; i++, j--)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
	}
}
