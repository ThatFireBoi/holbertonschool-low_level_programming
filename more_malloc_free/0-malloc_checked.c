#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - Allocates memory using malloc
 *
 * @b: the size to allocate
 *
 * Return: Pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		free(ptr);
		exit(98);
	}
	return (ptr);
}
