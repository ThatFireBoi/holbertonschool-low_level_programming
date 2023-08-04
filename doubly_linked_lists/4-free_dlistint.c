#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - Frees a dlistint_t list
 *
 * @head: a pointer to the list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
