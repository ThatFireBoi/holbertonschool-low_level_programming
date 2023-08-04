#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - Function that prints all the elements of a list
 *
 * @h: the head of the list
 *
 * Return: Returns the numbers of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return(nodes);
}
