#include "main.h"
/**
 * print_last_digit - entry point
 *
 * @i: variable used
 *
 *Return: i, last digit of a number.
 */

int print_last_digit(int i)
{
	i = i % 10;
	if (i >= 0)
	{
		_putchar(i + '0');
		return (i);
	}
	else
	{
		i = i * -1;
		_putchar(i + '0');
		return (i);
	}
}



