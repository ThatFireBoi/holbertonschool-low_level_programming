#include "main.h"

/**
 * _strlen - Returns length of a string
 *
 *@s: string to count
 * Return: returns c
 */

int _strlen(char *s)
{
	int c = 0;

	for (; *s != '\0'; s++)
	{
		c++;
	}

	return (c);
}
