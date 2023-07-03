#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - prints a string
 *
 * @s: the string that will be printed
 *
 */

void _puts_recursion(char *s)
{
	while (*s)
		_putchar(*s++);

	_putchar('\n');
}
