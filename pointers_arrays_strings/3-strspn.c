#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 *
 * @s: initial segment
 *
 * @accept: string of bytes that make up initial segment of s
 *
 * Return: a
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int a;
	unsigned int b;

	a = 0;
	while (s[a] != '\0')
	{
		b = 0;
		while (accept[b] != '\0' && s[a] != accept[b])
			b++;
		if (accept[b] == '\0')
			return (a);
		a++;
	}
	return (a);
}
