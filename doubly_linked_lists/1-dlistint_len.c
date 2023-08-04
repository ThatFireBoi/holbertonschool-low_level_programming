#include "lists.h"
#include <stdio.h>

/**
 * dlistint_len - function that returns the number of elements
 *
 * @h: the linked list
 *
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t elements = 0;

	while (h)
	{
		elements++;
		h = h->next;
	}

	return (elements);
}
