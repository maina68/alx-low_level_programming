#include "main.h"

/**
 * _strcmp -compares two strings
 * @s1: input value
 * @s2: input value
 * Return: nothing
 */
int _strcmp(char *s1, char *s2)
{
	if (strcmp(s1, s2) > 0)
	{
		printf("string s1 and s2 are the same, s1 == s2");
	}
	else if (strcmp(s1, s2) < 0)
	{
		printf("string s1 is less than s2, s1 < s2");
	}
	else
		printf("string s1 is grater than s2, s1 > s2");
}
