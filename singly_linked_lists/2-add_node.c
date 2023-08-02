#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * add_node - Function that adds a new node at the beginning of a list
 *
 * @head: A pointer to the head of the list
 *
 * @str: String to be added to the list
 *
 * Return: the address of the new element; NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	char *dupp;
	int len;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	dupp = strdup(str);
	if (dupp == NULL)
	{
		free(new);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	new->str = dupp;
	new->len = len;
	new->next = *head;

	*head = new;

	return (new);
}
