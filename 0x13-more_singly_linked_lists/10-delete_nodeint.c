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
	if (*head == NULL)
	{
		return (-1);
	}
	else if (index == 0)
	{
		*head = (*head)->next;
		free(tmp1);
		free(tmp2);
		return (1);
	}
	while (i < index - 1)
	{
		if (tmp1->next == NULL)
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
