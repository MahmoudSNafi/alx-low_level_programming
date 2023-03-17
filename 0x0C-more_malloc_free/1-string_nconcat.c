#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: number of bytes
 *
 * Return: char
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	unsigned int len1 = strlen(s1);
	unsigned int len2 = strlen(s2);
	char *p;

	if (s1 == NULL)
	{
		s1 = "";
	}
	else if (s2 == NULL)
	{
		s2 = "";
	}
	else if (n > len2)
	{
		n = len2;
	}
	p = malloc(sizeof(char) * (len1 + n + 1));
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (len1 + n); i++)
	{
		if (i < len1)
		{
			p[i] = s1[i];
		}
		else
		{
			p[i] = s2[i - len1];
		}
	}
	p[i] = '\0';
	return (p);
}
