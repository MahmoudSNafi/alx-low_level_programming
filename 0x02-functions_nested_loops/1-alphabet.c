#include "main.h"

/**
 * main - Entry point
 *
 * Return: alphabet in small caps
 */

void print_alphabet(void)
{
	char c='a';

	for (c='a';c<='z';c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
