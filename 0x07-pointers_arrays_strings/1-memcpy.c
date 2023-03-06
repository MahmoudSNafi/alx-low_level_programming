#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: destination area of memory
 * @src: area of memory to be copied
 * @n: number of bytes to be copied
 *
 * Return: destination area
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
