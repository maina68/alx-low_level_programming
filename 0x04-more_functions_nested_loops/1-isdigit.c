#include "main.h"

/**
 * _isdigit - checks for a digit 0 through 9
 * @c: character to be checked
 *
 * Return: 1 if c is a digit, otherwise 0
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 'a')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
