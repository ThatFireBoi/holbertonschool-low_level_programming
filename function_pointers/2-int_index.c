#include "function_pointers.h"

/**
  * int_index - Function that searches for an integer
  *
  * @array: array of numbers
  *
  * @size: number of elements in the array
  *
  * @cmp: pointer to the function to be used to compare values
  *
  * Return: if no element matches, -1;size <= 0, return -1, index
  *			of the first element.
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);

				i++;
			}
		}
	}
	return (-1);
}
