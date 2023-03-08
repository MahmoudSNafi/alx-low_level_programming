#include "main.h"

/**
 * _find_root - finding root
 * @root: loop
 * @num: integer
 *
 * Return: integer
 */

int _find_root(int root, int num)
{
	if (root * root < num)
	{
		return(_find_root(root + 1, num));
	}
	else if (root * root == num)
	{
		return (root);
	}
	return (-1);
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer
 *
 * Return: integer
 */

int _sqrt_recursion(int n)
{
	int i = 0;

	if (n == 0 || n == 1)
	{
		return (n);
	}
	return (_find_root(i, n));
}
