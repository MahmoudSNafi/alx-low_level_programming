#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minumum value
 * @max: maximum value
 *
 * Return: int
 */

int *array_range(int min, int max)
{
	int i;
	int diff;
	int *p;

	if (max < min)
	{
		return (NULL);
	}
	diff = max - min;
	p = malloc(sizeof(int) * (diff + 1));
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= diff; i++)
	{
		p[i] = min + i;
	}
	return (p);
}
