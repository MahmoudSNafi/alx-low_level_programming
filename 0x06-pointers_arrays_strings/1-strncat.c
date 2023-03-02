#include "main.h"

/**
 * _strncat - concatenate n elements of an array into another
 * @dest: destinationa array
 * @src: source array
 * @n: number of elements
 *
 * Return: concatenated array
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_ind = 0;
	int dest_len = 0;
	int src_ind = 0;
	int src_len = 0;
	int i;

	while (dest[dest_ind++])
	{
		dest_len++;
	}
	while (src[src_ind++])
	{
		src_len++;
	}
	for (i = 0; i < n && i < src_len; i++)
	{
		dest[dest_len + i] = src[i];
	}
	return (dest);
}
