#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 * @r: An integer to check
 * Return: value of the last digit.
 */
int print_last_digit(int r)
{
	int f;

	if (r < 0)
		f = -1 * (r % 10);
	else
		n = r % 10;

	_putchar((n % 10) + '0');
	return (n % 10);
}
