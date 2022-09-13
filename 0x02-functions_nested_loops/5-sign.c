#include "main.h"
/**
 * print_sign - returns 1 and print + if n is greater than zero
 * @n: An input number
 * Description: prints the sign of a number
 * Return: 0 and print 0 if n is zero
 * -1 and prints - if n is less than zero
 */
int print_sign(int n)
{
	int var;

	if (n > 0)
	{
		var = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		var = 0;
		_putchar('0');
	}
	else
	{
		var = -1;
		_putchar('-');
	}

	return (var);
}
