#include "main.h"

/**
 * swap_int - swaps the value a with b
 * @a: integer to be swapped
 * @b: integer to be swapped
 * Return: Always 0 (success)
 */

void swap_int(int *a, int *b)
{
	int k = *a;
	*a = *b;
	*b = k;
}
