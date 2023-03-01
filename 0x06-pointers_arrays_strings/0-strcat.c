#include "main.h"
#include <string.h>

/**
 * _strcat - concatenate two strings together
 * @dest: destination string
 * @src: source string
 *
 * Return: concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int dest_index = 0;
	int dest_len = 0;
	int src_index = 0;
	int src_len = 0;
	int i;

	while (dest[dest_index++])
	{
		dest_len++;
	}
	while (src[src_index++])
	{
		src_len++;
	}
	for (i = 0; i < src_len; i++)
	{
		dest[dest_len + i] = src[i];
	}
	return (dest);
}
