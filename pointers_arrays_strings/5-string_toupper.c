#include "main.h"

/**
 * string_toupper - Function that changes all lowercase letters to uppercase
 *
 * @p: The string that will be modified
 *
 * Return: b
 */

char *string_toupper(char *b)
{
	int a = 0;

	while (b[a])
	{
		if (b[a] >= 97 && b[a] <= 122)
		{
			b[a] -= 32;
		}

		a++;
	}

	return (b);
}
