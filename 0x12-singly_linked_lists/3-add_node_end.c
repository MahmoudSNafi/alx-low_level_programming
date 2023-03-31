#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: a pointer to head
 * @str: input string
 *
 * Return: a pointer
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *dup;
	int dup_len = 0;
	list_t *temp;
	list_t *temp2;

	temp = malloc(sizeof(temp));
	if (temp == NULL)
	{
		return (NULL);
	}
	dup = strdup(str);
	if (dup == NULL)
	{
		free(temp);
		return (NULL);
	}
	while (str[dup_len])
	{
		dup_len++;
	}
	temp->str = dup;
	temp->len = dup_len;
	temp->next = NULL;
	if (*head == NULL)
	{
		*head = temp;
	}
	else
	{
		temp2 = *head;
		while (temp2->next != NULL)
		{
			temp2 = temp2->next;
		}
		temp2->next = temp;
	}
	return (temp);
}
