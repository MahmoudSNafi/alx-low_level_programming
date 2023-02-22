#include "main.h"

/**
 * print_last_digit - function to print last digit of a number
 * @i : input integer
 *
 * Return: the last digit or 0.
 */

int print_last_digit(int i)
{
	int last_digit;

	last_digit = i % 10;
	if (last_digit < 0)
	{
		last_digit = last_digit * -1;
	}
	_putchar(last_digit + '0');
	return (last_digit);
}
