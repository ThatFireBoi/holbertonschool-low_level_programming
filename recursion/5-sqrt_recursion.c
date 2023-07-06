#include "main.h"

/**
 * check - checks the input number from n to the base
 *
 * @n: number is squared and compared against base
 *
 * @base: number to check
 *
 * Return: natural square root of number
 */

int check(int n, int base)
{
	if (n * n == base)
		return (n);
	if (n * n > base)
		return (-1);
	return (check(n + 1, base));
}

/**
 * _sqrt_recursion - return the natural square root of a number n
 *
 * @n: number to check for square root
 *
 * Return: the natural square root of number
 */

int _sqrt_recursion(int n)
{
	return (check(1, n));
}
