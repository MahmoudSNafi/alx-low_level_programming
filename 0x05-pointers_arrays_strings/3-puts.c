#include "main.h"
#include <string.h>

/**
 * _puts - print string to stdout
 * @str: input string
 *
 * Return: string
 */

void _puts(char *str)
{
	unsigned long int i;

	for (i = 0; i < strlen(str); i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
