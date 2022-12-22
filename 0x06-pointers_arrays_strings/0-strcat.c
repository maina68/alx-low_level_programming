#include "main.h"
#include <stdio.h>

/**
 * _strcat - appends the src string to the dest string
 * dest: string on which concatenation is to happen
 * src: string to be appended to the dest string
 * Return: pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	char src[];
	char dest[];
	char *ptr;

	strcat(dest, src);
	printf("strcat(dest,src):%s\n", dest);

	return (*char dest[]);
}
