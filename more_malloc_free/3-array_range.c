#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers
 *
 * @min: minimum values in array
 *
 * @max: maximum values in array
 *
 * Return: If min>max, or fail, NULL; pointer to created array
 */

int *array_range(int min, int max)
{
	int *a = 0;
	int i = 0;

	if (min > max)
		return (NULL);

	a = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (a == NULL)
		return (NULL);

	while (min <= max)
	{
		a[i] = min;
		i++;
		min++;
	}

	return (a);
}
