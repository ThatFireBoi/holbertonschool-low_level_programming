#include "lists.h"
#include <stdio.h>

/**
 * list_len - function that returns the number of elements
 *
 * @h: the linked list
 *
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t elements = 0;

	while (h)
	{
		elements++;
		h = h->next;
	}

	return (elements);
}

