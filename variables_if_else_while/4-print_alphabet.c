#include <stdio.h>

/**
 * main - write the characters a-z in lowercase, except q and e
 *
 * Return: 0.
 */

int main(void)
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
	if (ch != 'e' && ch != 'q')
	{
		putchar(ch);
	}
	}
	putchar('\n');
	return (0);
}
