#include "main.h"
#include <string.h>

/**
 * print_rev - reverse a string
 * @s: input string
 *
 * Return: a reversed string
 */

void print_rev(char *s)
{
	long int i;

	for (i = strlen(s) - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
