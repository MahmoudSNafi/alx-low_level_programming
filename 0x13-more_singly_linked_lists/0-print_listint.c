#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: a pointer to list
 *
 * Return: list
 */

size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h)
	{
		count++;
		printf("%i\n", h->n);
		h = h->next;
	}
	return (count);
}
