#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function returns a pointer to a 2 dimensional array of integers
 *
 * @width: colums
 *
 * @height: rows
 *
 * Return: NULL on failure; array
 */

int **alloc_grid(int width, int height)
{
	int **arr;
	int a;
	int b;
	int c;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = (int **)malloc(sizeof(*arr) * height);
	if (arr == NULL)
		return (NULL);
	for (c = 0; c < height; c++)
	{
		arr[c] = (int *)malloc(sizeof(int) * width);
		if (arr[c] == NULL)
		{
			while (c--)
				free(arr[c]);
			free(arr);
			return (NULL);
		}
	}

	for (a = 0; a < height; a++)
		for (b = 0; b < width; b++)
			arr[a][b] = 0;

	return (arr);
}

