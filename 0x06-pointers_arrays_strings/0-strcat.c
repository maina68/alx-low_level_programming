#include "main.h"
#include <string.h>

/**
 * _strcat - appends the src string to the dest string
 *
 * Return: pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		strcat(dest, src);
		dest++;
		str++;
	}
	*dest = '\0';
	return (start);
}
