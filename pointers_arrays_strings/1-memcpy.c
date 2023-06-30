#include "main.h"

/**
 * _memcpy - copy bytes from memory area to other memory area
 *
 * @dest: memory area
 *
 * @src: memory area
 *
 * @n: bytes from memory area to be copied
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}

	return (dest);
}
