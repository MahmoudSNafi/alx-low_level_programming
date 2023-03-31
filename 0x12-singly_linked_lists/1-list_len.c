#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: a pointer to list
 *
 * Return: size_t
 */

size_t list_len(const list_t *h)
{
	size_t l = 0;

	while (h)
	{
		l++;
		h = h->next;
	}
	return (l);
}
