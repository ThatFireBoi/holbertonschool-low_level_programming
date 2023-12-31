#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - fuction that concats two strings but with s2 by n amount.
 *
 * @s1: base string to concatenate to
 *
 * @s2: string to copy from
 *
 * @n: amount of s2 to concatenates
 *
 * Return: pointer to allocated memory; NULL if failed
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i;
	unsigned int a;
	unsigned int b;

	a = b = 0;
	if (s1)
		for (; s1[a]; a++)
			;
	if (s2)
		for (; s2[b]; b++)
			;
	if (!(n >= b))
		b = n;

	str = malloc(sizeof(char) * (a + b) + 1);
	if (!str)
		return (NULL);

	for (i = 0; i < (a + b); i++)
	{
		if (i < a)
			str[i] = s1[i];
		else
			str[i] = s2[i - a];
	}

	str[i] = '\0';

	return (str);
}

