#include "main.h"

/**
 * print_alphabet_x10 - print alphabet ten times.
 * outpout: chars
 *
 * Return: ten lines of alphabet
 * No errores are expected
 */

void print_alphabet_x10(void)
{
	int i;
	char c;

	for (i = 0; i < 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
