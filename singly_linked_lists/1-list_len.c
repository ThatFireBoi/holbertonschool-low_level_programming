#include "lists.h"
#include <stdio.h>

/**
 * print_list - function that returns the number of elements
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

