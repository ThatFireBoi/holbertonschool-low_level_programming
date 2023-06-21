#include "main.h"

/**
 * _islower - entry point, checks for lowercase character
 *
 * @c: the int used
 *
 * Return: always zero.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
