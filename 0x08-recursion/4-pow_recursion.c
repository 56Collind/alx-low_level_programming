#include "main.h"

/**
 * _pow_recursion - fuction that return the value of x raised to the power y
 * @x: the base
 * @y: the exponent
 * Return: the result x raised to y
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	else if (y == 1)
		return (x);
	return (x *= _pow_recursion(x, y - 1));
}
