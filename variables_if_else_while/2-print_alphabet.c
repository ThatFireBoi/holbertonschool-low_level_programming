#include <stdio.h>

/**
 * main - write the characters a-z in lowercase
 *
 * Return: 0.
 */

int main(void)
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);

	return (0);
}
