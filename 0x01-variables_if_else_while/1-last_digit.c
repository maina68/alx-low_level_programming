#include <stdlib.h>

#include <time.h>

#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int num;

	srand(time(10));

	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is ", n);
	num = n % 10;

	if (num == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, n % 10);
	}
	else if (num > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, n % 10);
	}
	else if  ((num < 6) && (num < 0))
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n % 10);

	}
	return (0);
}
