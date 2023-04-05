#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t
 * @head: a pointer to list
 *
 * Return: int
 */

int sum_listint(listint_t *head)
{
	listint_t *tmp;
	int sum = 0;

	tmp = head;
	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
