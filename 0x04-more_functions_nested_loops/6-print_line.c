#include "main.h"

/**
 * print_line - printing lines based on length
 * @n: input parameter
 *
 * Return: line based on length
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (n)
		{
			_putchar('_');
			n--;
		}
		_putchar('\n');
	}
}
