#include <stdio.h>
/**
 * main-Entry point
 *
 * Return: Always 0
 */


int main(void)
{
	long int n;

	if (n > 0)
	{
		printf("%li is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%li is zero\n", n);
	}
	else
	{
		printf("%li is negative\n", n);
	}
}
