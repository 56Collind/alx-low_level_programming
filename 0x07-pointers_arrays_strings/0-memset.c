#include "main.h"
#include <string.h>

/**
 * _memset - sets a character to a memory location
 * @s: a pointer to a location
 * @b: the character to set at a memory
 * @n: the size to set new character
 * Return: the pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}
