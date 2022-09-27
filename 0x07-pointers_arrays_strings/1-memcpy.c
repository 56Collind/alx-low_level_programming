#include "main.h"

/**
 * _memcpy - function that copy a memory to another
 * @dest: destination
 * @src: source
 * @n: number of times to copy
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int k;

	for (k = 0; k < n; k++)
	{
		dest[k] = src[k];
	}
	return (dest);
}
