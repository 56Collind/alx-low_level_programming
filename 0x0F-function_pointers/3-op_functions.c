#include "3-calc.h"
/**
 * op_add - add two numbers
 * @a: first number
 * @b: second number
 *
 * Return: add.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract two numbers
 * @a: first number
 * @b: second number
 *
 * Return: sub.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply tiow numbers
 * @a: the first number
 * @b: the second number
 *
 * Return: multiply
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two numbers
 * @a: first number
 * @b: second number
 *
 * Return: division
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - calculations the modulo of two number
 * @a: first number
 * @b: second number
 *
 * Return: modulo
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
