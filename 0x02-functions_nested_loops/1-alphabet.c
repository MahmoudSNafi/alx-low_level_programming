#include "main.h"

/**
 * print_alphabet - function used to print letters
 *
 * print chars
 *
 * Return: alphabet in small caps
 *
 * no errors are expected
 */

void print_alphabet(void)
{
	char c = 'a';

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
