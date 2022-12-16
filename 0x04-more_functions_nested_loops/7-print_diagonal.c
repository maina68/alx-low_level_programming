#include "main.h"

/**
 * print_diagonal - Draws a diagonal line using characters \.
 * @n: number of \ characters to be drawn
 */
void print_diagonal(int n)
{
	int line, gap;

	if (n > 0)
	{
		for (line = 0; line <= 0; line++)
		{
			for (gap = 0; gap <= line; gap++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			if (line == n - 1)
			{
				continue;
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}
