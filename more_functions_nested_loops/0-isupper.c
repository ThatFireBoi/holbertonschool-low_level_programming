#include "main.h"

/**
 * _isupper - entry point, checks for uppercase character
 *
 * @c: the variable used
 *
 * Return: always zero.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
