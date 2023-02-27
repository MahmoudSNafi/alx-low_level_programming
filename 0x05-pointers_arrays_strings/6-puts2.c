#include <string.h>
#include "main.h"

/**
 * puts2 - function print each other char of a string
 * @str: input string
 *
 * Return: string
 */

void puts2(char *str)
{

	if (str == NULL)
	{
		_putchar('\n');
	}
	else
	{
		unsigned long int i;

		for (i = 0; i <= strlen(str) - 1; i += 2)
		{
			_putchar(str[i]);
		}
		_putchar('\n');
	}
}
