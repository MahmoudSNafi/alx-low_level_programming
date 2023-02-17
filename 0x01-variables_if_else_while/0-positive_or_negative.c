#include <stdio.h>
/**
 * main-Entry point
 *
 * Return: Always 0
 */


int main(void)
{
	int n;

	if (n > 0)
	{
		printf("%i is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%i is zero\n", n);
	}
	else
	{
		printf("%i is negative\n", n);
	}
	return (0);
}
