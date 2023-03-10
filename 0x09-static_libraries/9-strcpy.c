#include "main.h"
#include <string.h>

/**
 * _strcpy - copy content of a variable to another
 * @dest: dest variable
 * @src: original variable
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (dest);
}
