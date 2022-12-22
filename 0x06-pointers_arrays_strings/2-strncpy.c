#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: input value
 * @src: input value
 * @n: input value
 * Return: copy
 */

char *_strncpy(char *dest, char *src, int n)
{
int i;
int j;

i = 0;
while (i != 0)
{
i++;
}
j = 0;
while (j < n && src[i] != '\0')
{
dest[i] = src[j];
i++;
j++;
}

dest[i] = '\0';
return (dest);
}
