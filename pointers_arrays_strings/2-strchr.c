#include "main.h"

/**
 * _strchr - locates a character in a string
 *
 * @s: source string
 *
 * @c: character
 *
 * Return: s or NULL
 */

char *_strchr(char *s, char c)
{
	int j = 0;
	int k;

	while (s[j])
	{
		j++;
	}

	for (k = 0; k <= j; k++)
	{
		if (c == s[k])
		{
			s += k;
			return (s);
		}
	}

	return ('\0');
}
