#include "main.h"
#include <stdio.h>

/**
 * clear_bit - set the value of a bit to 0 at a given index
 * @n: pointer to decimal number change
 * @index: index position to change
 * Return: 1 if it worked
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int k;

	if (index > 63)
		return (-1);
	k = 1 << index;

	if (*n & k)
		*n ^= k;

	return (1);
}
