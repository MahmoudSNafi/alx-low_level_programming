#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a list_t
 * @head: pointer to head
 * @str: data of node
 *
 * Return: pointer to first node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	char *dup;
	int dup_len = 0;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
	{
		return (NULL);
	}
	dup = strdup(str);
	if (dup == NULL)
	{
		free (temp);
		return (NULL);
	}
	while (str[dup_len])
	{
		dup_len++;
	}
	temp->str = dup;
	temp->len = dup_len;
	temp->next = *head;
	*head = temp;
	return (temp);
}
