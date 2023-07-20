#include "3-calc.h"
#include <stdlib.h>

/**
 * op_add - addition
 *
 * @a: variable in the operations
 *
 * @b: variable in the operations
 *
 * Return: results of operations between two variables
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtractions
 *
 * @a: variable in the operations
 *
 * @b: variable in the operations
 *
 * Return: results of operations between two variables
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication
 *
 * @a: variable in the operations
 *
 * @b: variable in the operations
 *
 * Return: results of operations between two variables
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division
 *
 * @a: variable in the operations
 *
 * @b: variable in the operations
 *
 * Return: results of operations between two variables
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - modulus
 *
 * @a: variable in the operations
 *
 * @b: variable in the operations
 *
 * Return: results of operations between two variables
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
