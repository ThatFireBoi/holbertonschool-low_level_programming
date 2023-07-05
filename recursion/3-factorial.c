#include "main.h"

/**
  * factorial - Calculate the factorial of a given number
  *
  * @n: the number whose factorial is being calculated
  *
  * Return: -1 o 1
  */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n <= 1)
		return (1);

	return (n * factorial(n - 1));
}
