#include <stdio.h>
#include "main.h"

/**
 * print_array - print an array of integers
 * @arr: input array
 * @n: input n elements
 */
void print_array(int *arr, int n)
{
	int c = 0;

	for (; c < n; c++)
	{
		printf("%d", *(arr + c));
		if (c != (n - 1))
			printf(", ");
	}
	printf("\n");
}
