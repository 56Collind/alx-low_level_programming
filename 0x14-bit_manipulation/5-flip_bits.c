#include "main.h"
#include <stdio.h>

/**
 * flip_bits - flip bits to convert
 * @n: first number
 * @m: second number to convert
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i;

	for (i = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			i++;
	}

	return (i);
}
