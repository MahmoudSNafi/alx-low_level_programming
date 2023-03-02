#include "main.h"

/**
 * leet - applying 1337 encoding for string
 * @str: input string
 *
 * Return: encoding string
 */

char *leet(char *str)
{
	char src[] = "aAeEoOtTlL";
	char dest[] = "4433007711";
	int i = 0;
	int j = 0;

	while (str[i])
	{
		j = 0;
		while (src[j])
		{
			if (str[i] == src[j])
			{
				str[i] = dest[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (str);
}
