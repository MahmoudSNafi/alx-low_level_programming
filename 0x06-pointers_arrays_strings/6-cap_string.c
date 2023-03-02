#include "main.h"

/**
 * cap_string - capitalize every word in string
 * @str: input string
 *
 * Return: capitalized words
 */

char *cap_string(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (!(str[i] >= 97 && str[i] <= 122))
		{
			i++;
		}
		else
		{
			if (str[i - 1] == ' ' || str[i - 1] == '\t' || str[i - 1] == '\n'
			|| str[i - 1] == ',' || str[i - 1] == ';' || str[i - 1] == '.'
			|| str[i - 1] == '!' || str[i - 1] == '?' || str[i - 1] == '\"'
			|| str[i - 1] == '(' || str[i - 1] == ')' || str[i - 1] == '{'
			|| str[i - 1] == '}' || i == 0)
			{
				str[i] -= 32;
			}
			else
			{
				i++;
			}
		}
	}
	return (str);
}
