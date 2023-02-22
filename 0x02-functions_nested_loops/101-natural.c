#include "main.h"
#include <stdio.h>

/**
 * sum_natural - sum natural numbers below 1024
 *
 * Return: summation or 0
 */

int sum_natural(void)
{
	int i;
	int sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum = sum + i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
