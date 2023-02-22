#include "main.h"

/**
 * print_sign - getting the sign of input
 * @n: input parameter
 *
 * Return: sign and numbder and 0 if it was 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
