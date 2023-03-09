#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: input string
 *
 * Return: int
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
	return (0);
	}
	return (_strlen_recursion(s + 1) + 1);
}

/**
 * compare - comparing function
 * @s: input string
 * @l: string length
 *
 * Return: integer
 */

int compare(char *s, int l)
{
	if (l < 1)
	{
		return (1);
	}
	if (*s == *(s + l))
	{
		return (compare(s + 1, l - 2));
	}
	return (0);
}

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 * @s: input string
 *
 * Return: 0 or 1
 */

int is_palindrome(char *s)
{
	int l = _strlen_recursion(s);

	return (compare(s, l - 1));
}
