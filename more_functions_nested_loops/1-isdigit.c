#include "main.h"

/**
 * _isdigit - entry point, checks for a digit, 0 through 9
 *
 * @c: the variable used
 *
 * Return: always zero.
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
		return (0);
}
