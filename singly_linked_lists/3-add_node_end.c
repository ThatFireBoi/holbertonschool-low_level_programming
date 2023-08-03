#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - Function that adds a new node at the end of a list
 *
 * @head: A pointer to the head of the list
 *
 * @str: String to be added to the list
 *
 * Return: the address of the new element; NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *dupp;
	int len;
	list_t *new, *last;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	dupp = strdup(str);
	if (str == NULL)
	{
		free(new);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	new->str = dupp;
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}

	return (*head);
}

