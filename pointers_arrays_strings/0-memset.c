#include "main.h"

/**
 * _memset - function that fills memory with constant byte
 *
 * @s: memory area to fill
 *
 * @b: constant byte
 *
 * @n: bytes
 *
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}

	return (s);
}
