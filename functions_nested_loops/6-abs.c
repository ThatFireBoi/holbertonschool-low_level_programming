#include "main.h"
/**
 * _abs - entry point, computes the absolute value
 *
 * @c: integer used
 * Return: absolute value of c.
 */

int _abs(int c)
{
	if (c > 0 || c == 0)
	{
		return (c);
	}
	else
		return (c * -1);
}
