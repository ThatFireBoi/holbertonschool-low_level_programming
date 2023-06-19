#include <stdio.h>

/**
 * main - write the single digit numbers of base 10, from 0.
 *
 * Return: 0.
 */

int main(void)
{
	char ch = '0';

	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
