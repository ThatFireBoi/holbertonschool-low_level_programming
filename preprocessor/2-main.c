#include <stdio.h>

/**
 * main - Prints the file name of the file it was compiled from
 *
 * Return: Always zero
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
