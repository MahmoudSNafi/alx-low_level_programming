#include "main.h"

/**
 * _isalpha - checks if the input is alpha
 * @c: input parameter
 *
 * Return: 1 if alpha and 0 if not
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
