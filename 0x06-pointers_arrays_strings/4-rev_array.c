#include "main.h"

/**
 * reverse_array - reverse some chars of a string
 * @a: input array
 * @n: number of chars
 *
 * Return: reversed string
 */

void reverse_array(int *a, int n)
{
	int i;
	int old;

	for (i = 0; i < n / 2; i++)
	{
		old = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = old;
	}
}
