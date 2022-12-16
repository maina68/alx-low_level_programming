#include "main.h"

/**
 * print_line - Draws a straight line using a character __
 * @n: Number of _ characters to be printed out
 */
void print_line(int n)
{
	int line;

	if (n > 0)
	{
		for (line = 0; line <= n; line++)
		{
			_putchar('_');
		}
	}
	else if (n <= 0)
	{
		_putchar('\n');
	}
	_putchar('\n');
}
