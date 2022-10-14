#include "variadic_functions.h"
/**
 * print_numbers - prints numbers, followed by a new line.
 * @n: numbers of integers
 * @separator:string to be printed between the strings
 *
 * Return: 0 Always success
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list printnumbers;
	unsigned int i;

	va_start(printnumbers, n);
	for (i = 0; i < n;; i++)
	{
		printf("%d", va_arg(printnumbers, int));
		if (separator && i < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(printnumbers);
}
