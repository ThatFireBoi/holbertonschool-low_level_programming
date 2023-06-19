#include <stdio.h>

/**
 * main - write the characters z-a in lowercase
 *
 * Return: 0.
 */

int main(void)
{
	char ch = 'z';

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
