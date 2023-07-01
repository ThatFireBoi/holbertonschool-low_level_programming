#include "main.h"

/**
 * leet - encodes a string into 1337
 *
 * @s: pointer to input string.
 *
 * Return: s
 */

char *leet(char *s)
{
	int i;
	int j;
	char subst[] = "aAeEoOtTlL";
	char l[] = "43071";

	i = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; subst[j] != '\0'; j++)
			if (s[i] == subst[j])
				s[i] = l[j / 2];
	}
	return (s);
}
