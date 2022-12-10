#include <stdio.h>
#include <stdlib.h>

/**
 *  main - Entry point
 *  Return: ALways (0) (Success)
 */
int main(void)
{
	int num = 0;

	while (num < 10)
	{
		print("%d", num);
		num++;
	}
	putchar('\n');
	return (0);
}
