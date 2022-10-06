#include "main.h"
#include <stdlib.h>
/**
 * create_array - create an array of char
 * @size: size of an array
 * @c: storaged char
 * Return: pointer of an array of char
 */
char *create_array(unsigned int size, char c)
{
	char *cr;
	unsigned int m;

	if (size == 0)
		return (NULL);

	cr = malloc(sizeof(c) * size);

	if (cr == NULL)
		return (NULL);

	for (m = 0; i < size; m++)
		cr[m] = c;

	return (cr);
}
