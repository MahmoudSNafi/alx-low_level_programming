#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_listint - frees a listint_t list.
 * @head: a pointer to list
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	temp = head;
	while (temp)
	{
		temp = temp->next;
		free(head);
		head = temp;
	}
	free(head);
}
