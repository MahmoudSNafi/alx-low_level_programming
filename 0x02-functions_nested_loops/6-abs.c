#include "main.h"

/**
 * _abs - function the give the absolute value of an input
 * @i: input number as int
 *
 * Return: absolute value of a number or 0
 */

int _abs(int i)
{
	if (i <= 0)
	{
		return (i * -1);
	}
	else
	{
		return (i);
	}
}
