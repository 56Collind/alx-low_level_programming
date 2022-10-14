#include "variadic_functions.h"
/**
 * sum_them_all - returns the sum of all parameters
 * @n: integer
 *
 * Return: always 0 (sucess)
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list sumnumbers;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(sumnumber, n);

	for (i = 0; i < n; i++)
		sum += va_arg(sumnumber, int);

	va_end(sumnumbers);

	return (sum);
}
