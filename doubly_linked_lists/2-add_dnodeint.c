#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * add_dnodeint - Function that adds a new node at the beginning of a list
 *
 * @head: A pointer to the head of the list
 *
 * @n: integer for the new node
 *
 * Return: the address of the new element; NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head != NULL)
		(*head)->prev = new;
	*head = new;

	return (new);
}
