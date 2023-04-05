#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_nodeint_at_index - returns the nth node of a listint_t
 * @head: a pointer to list
 * @index: index of node
 *
 * Return: a pointer
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int count = 0;

	temp = head;
	while (count < index)
	{
		temp = temp->next;
		if (temp == NULL)
		{
			return (NULL);
		}
		count++;
	}
	return (temp);
}
