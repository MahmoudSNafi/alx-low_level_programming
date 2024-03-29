#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: a pointer to list
 *
 * Return: number
 */

size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
