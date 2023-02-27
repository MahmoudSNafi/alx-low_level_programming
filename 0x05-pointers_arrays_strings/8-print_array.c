#include <string.h>
#include "main.h"
#include <stdio.h>

/**
 * print_array - print number of elements of an array
 * @a: array
 * @n: number to be printed
 *
 * Return: number of elements
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n - 1; i++)
	{
		printf("%i, ", a[i]);
	}
	printf("%i\n", a[n - 1]);
}
