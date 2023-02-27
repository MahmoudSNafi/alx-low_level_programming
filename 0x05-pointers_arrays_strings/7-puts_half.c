#include <string.h>
#include "main.h"

/**
 * puts_half - print the 2nd half of a string
 * @str: input string
 *
 * Return: string
 */

void puts_half(char *str)
{
	unsigned long int i;

	if (*str == '\0')
	{
		_putchar('\n');
	}
	else
	{
		for (i = (strlen(str) + 1) / 2; i <= strlen(str) - 1; i++)
		{
			_putchar(str[i]);
		}
		_putchar('\n');
	}
}
