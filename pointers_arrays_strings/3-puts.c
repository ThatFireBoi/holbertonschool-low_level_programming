#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string
 * @str: the string that will be printed
 *
 */

void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
