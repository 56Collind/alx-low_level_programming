#include "main.h"

/**
 * _strpbrk - search a string for any of the set of bytes.
 * @s: first string
 * @accept: second string
 * Return: a pointer to the byte in s that mnatches of the bytes
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int b, c;

	for (b = 0; *(s + b) != '\0'; b++)
	{
		for (c = 0; *(accept + c) != '\0'; c++)
		{
			if (s[b] == accept[c])

				return (s + b);
		}
	}
	return ('\0');
}
