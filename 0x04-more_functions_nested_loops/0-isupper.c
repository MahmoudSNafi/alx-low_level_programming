#include "main.h"

/**
 * _isupper - checks for the upper case
 * @c: is the input parameter
 *
 * Return: 1 if upper and 0 if not
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
