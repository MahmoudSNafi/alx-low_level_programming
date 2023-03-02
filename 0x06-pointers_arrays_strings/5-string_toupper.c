#include "main.h"

/**
 * string_toupper - change letters to uppercase
 * @str: input string
 *
 * Return: upper cases
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
			i++;
		}
		else
		{
			i++;
			continue;
		}
	}
	return (str);
}
