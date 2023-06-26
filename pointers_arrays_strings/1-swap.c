#include "main.h"

/**
 * swap_int - swaps values
 *
 *@a: integer to be swapped
 *@b: integer to be swapped
 */

void swap_int(int *a, int *b)
{
	int swp = *a;
	*a = *b;
	*b = swp;
}
