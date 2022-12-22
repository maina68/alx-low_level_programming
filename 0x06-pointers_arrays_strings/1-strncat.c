#include "main.h"

/**
 * _strncat - appends the src string onto the dest string
 * using n bytes from src and src does not need to be
 * null-terminated if it contains n or more bytes
 * @dest: input value
 * @src:input value
 * @n: input value
 * Return: pointer to the resulting string dest
 */

char *strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	while (i != 0)
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] = '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';
	return (dest);
}
