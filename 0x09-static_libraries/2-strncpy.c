#include "main.h"

/**
 * _strncpy - copy chars from string to another
 * @dest: destination string
 * @src: source string
 * @n: number of chars
 *
 * Return: string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int src_len = 0;

	while (src[i++])
	{
		src_len++;
	}
	for (i = 0; i < n && i < src_len; i++)
	{
		dest[i] = src[i];
	}
	for (i = src_len; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
