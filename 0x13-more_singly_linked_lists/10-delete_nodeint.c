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
	unsigned int i;

	tmp1 = *head;
	if (*head == NULL)
	{
		return (-1);
	}
	else if (index == 0)
	{
		*head = (*head)->next;
		free(tmp1);
		return (1);
	}
	for (i = 0; i < (index - 1); i++)
	{
		if (tmp1->next == NULL)
		{
			return (-1);
		}
		tmp1 = tmp1->next;
	}
	tmp2 = tmp1->next;
	tmp1->next = tmp2->next;
	free(tmp2);
	return (1);
}
