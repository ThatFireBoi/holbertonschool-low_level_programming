#include <stdio.h>

/**
 * main - write the single digit numbers of base 10.
 *
 * Return: 0.
 */

int main(void)
{
	int n = '1';

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
