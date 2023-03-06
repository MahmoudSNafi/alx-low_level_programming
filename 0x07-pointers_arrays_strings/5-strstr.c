#include "main.h"
#include <stdio.h>

/**
 * _strstr - function that locates a substring
 * @haystack: destination string
 * @needle: string to be searched
 *
 * Return: a pointer to the beginning of the located substring, or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0, j, count = 0, len = 0;

	while (needle[count++])
	{
		len++;
	}
	while (haystack[i])
	{
		count = 0;
		for (j = 0; needle[j]; j++)
		{
			if (needle[j] == haystack[i + j])
			{
				count++;
			}
			else
			{
				break;
			}
		}
		if (count == len)
		{
			return (haystack + i);
		}
		i++;
	}
	return (NULL);
}
