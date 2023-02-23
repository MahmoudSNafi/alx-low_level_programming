#include "main.h"

/**
 * _isdigit - function to check if an input is digit
 * @c: input
 *
 * Return: 1 if digit and 0 if not
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
