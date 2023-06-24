#include <stdio.h>

/**
 * main - Prints the largest prime factor of the number 612852475143.
 *
 * Return: Always zero.
 */

int main(void)
{
	long prime = 612852475143, primef;

	while (primef < (prime / 2))
	{
		if ((prime % 2) == 0)
		{
			prime /= 2;
			continue;
		}

		for (primef = 3; primef < (prime / 2); primef += 2)
		{
			if ((prime % primef) == 0)
				prime /= primef;
		}
	}

	printf("%ld\n", prime);

	return (0);
}
