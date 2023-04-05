#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: pointer to list
 * @index: index
 *
 * Return: pointer
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp1, *tmp2;
	unsigned int i = 0;

	tmp1 = *head;
	tmp2 = *head;
	while (i < index)
	{
		if (tmp1->next == NULL && i + 1 < index)
		{
			return (-1);
		}
		tmp2 = tmp1;
		tmp1 = tmp1->next;
		i++;
	}
	tmp2->next = tmp1->next;
	free(tmp1);
	return (1);
}
