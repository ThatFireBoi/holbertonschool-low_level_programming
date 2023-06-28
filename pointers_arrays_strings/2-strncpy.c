#include "main.h"

/**
 * _strncpy - Copy a string
 *
 * @dest: destination
 *
 * @src: source
 *
 * @n: The copy limit
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a = 0;
	int b = 0;

	while (src[b])
	{
		b++;
	}

	while (a < n && src[a])
	{
		dest[a] = src[a];
		a++;
	}

	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}

	return (dest);
}
