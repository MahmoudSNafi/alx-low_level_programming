#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - used to print numbers to 98
 * @n : the input number
 *
 * Return: numbers to 98 or 0
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		int i;

		for (i = n; i < 98; i++)
		{
			printf("%d, ", i);
		}
		printf("%d\n", 98);
	}
	else if (n > 98)
	{
		int i;

		for (i = n; i > 98; i--)
		{
			printf("%d, ", i);
		}
		printf("%d\n", 98);
	}
	else
	{
		printf("%d\n", 98);
	}
}
