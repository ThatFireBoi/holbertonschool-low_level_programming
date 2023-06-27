#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 *
 * @a: the array
 *
 * @n: the number of elements of the array
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		if (i != n - 1)
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
		i++;
	}
	putchar('\n');
}
