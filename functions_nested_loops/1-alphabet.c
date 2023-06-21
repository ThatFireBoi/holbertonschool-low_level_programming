#include "main.h"

/**
 * print_alphabet - Entry point, prints alphabet in lowercase
 *
 * Return: Always zero.
 */

void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}

	_putchar('\n');
	return (0);
}
