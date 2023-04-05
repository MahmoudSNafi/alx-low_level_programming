#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: a pointer to list
 * @idx: index
 * @n: node content
 *
 * Return: a pointer
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp1,*tmp2, *new;
	unsigned int count = 0;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	tmp1 = *head;
	tmp2 = *head;
	while (count < idx)
	{
		if (tmp1->next == NULL)
		{
			return (NULL);
		}
		tmp2 = tmp1;
		tmp1 = tmp1->next;
		count++;
	}
	new->next = tmp1;
	tmp2->next = new;
	return (new);
}
