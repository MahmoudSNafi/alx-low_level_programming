#include <string.h>
#include "main.h"

/**
 * rev_string - reverse a string
 * @s: input string
 *
 * Return: string reversed
 */

void rev_string(char *s)
{
	unsigned long int i;
	char old_char;

	for (i = 0; i < strlen(s) / 2; i++)
	{
		old_char = s[i];
		s[i] = s[strlen(s) - i - 1];
		s[strlen(s) - i - 1] = old_char;
	}
}
