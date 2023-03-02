#include "main.h"

/**
 * rot13 - encoding text to rot13.
 * @str: input string
 *
 * Return: encoded string
 */

char *rot13(char *str)
{
	char src[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char dest[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
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
