#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * pop_listint - deletes the head node and returns the head node’s data
 * @head: a pointer to 1st node
 *
 * Return: int
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head == NULL)
	{
		return (0);
	}
	temp = *head;
	*head = (*head)->next;
	n = temp->n;
	free(temp);
	return (n);
}
