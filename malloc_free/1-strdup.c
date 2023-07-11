#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a ponter to a newly allocated space in memory
 *
 * @str: the string to duplicate
 *
 * Return: NULL if str = NULL; on succes returns pointer to duplicate string
 */

char *_strdup(char *str)
{
	int a = 0;
	int i = 1;
	char *s;

	if (str == NULL)
		return (NULL);

	while (str[i])
	{
		i++;
	}

	s = malloc((sizeof(char) * i) + 1);

	if (s == NULL)
		return (NULL);

	while (a < i)
	{
		s[a] = str[a];
		a++;
	}

	s[a] = '\0';
	return (s);
}
