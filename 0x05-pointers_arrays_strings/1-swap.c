#include "main.h"

/**
 * swap_int - swap values of two variables
 * @a: 1st parameter.
 * @b: s=2nd parameter.
 *
 * Return: swapping values.
 */

void swap_int(int *a, int *b)
{
	int old_a = *a;

	*a = *b;
	*b = old_a;
}
