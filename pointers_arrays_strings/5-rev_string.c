#include "main.h"

/**
 * rev_string - Reverses a string
 *
 * @s: The string to be reversed.
 */
void rev_string(char *s)
{
	int l = 0, in = 0;
	char tmp;

	while (s[in++])
		l++;

	for (in = l - 1; in >= l / 2; in--)
	{
		tmp = s[in];
		s[in] = s[l - in - 1];
		s[l - in - 1] = tmp;
	}
}
