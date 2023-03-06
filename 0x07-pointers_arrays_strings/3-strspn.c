#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: destination string
 * @accept: string to be matched
 *
 * Return: length
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;
	unsigned int count = 0;

	for (i = 0; s[i] >= '\0'; i++)
	{
		for (j = 0; accept[j] >= '\0'; j++)
		{
			if (s[i] == accept[j])
			{	count++;
				break;
			}
			else
			{
				if (accept[j] != '\0')
				{
					continue;
				}
				else
				{
					return (count);
				}
			}
		}
	}
	return (count);
}
