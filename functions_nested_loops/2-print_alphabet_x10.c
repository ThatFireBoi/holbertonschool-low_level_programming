#include "main.h"

/**
 * print_alphabet_x10 - Entry point, prints alphabet 10 times
 *
 *
 */

void print_alphabet_x10(void)
{
	char ch;
	int a;

	while (a <= 9)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_puthcar('\n');
		a++;
	}
}
