#include "main.h"
#include <stdlib.h>
/**
 * create_array - create array of char
 * @size: size of the array
 * @c: storage char
 *
 * Return: pointer of an array
 */
char *create_array(unsigned int size, char c)
{
	char *cr;
	unsigned int a;

	if (size == 0)
		return (NULL);

	cr = malloc(sizeof(c) * size);

	if (cr == NULL)
		return (NULL);

	for (a = 0; a < size; a++)
		cr[a] = c;

	return (cr);
}
