#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 *
 * @a: the array to be reversed
 *
 * @n: size of elements in array
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int t = 0;
	n -= 1;

	while (i <= n)
	{
		t = a[n];
		a[n--] = a[i];
		a[i++] = t;
	}
}
