#include "main.h"

/**
 * _strchr - find a character in a string
 * @s: the string to be looked into
 * @c: the char to be searched
 * Return: Null if found else c
 */

char *_strchr(char *s, char c)
{
	unsigned int b = 0;

	for (; s[b] != '\0'; b++)
		if (s[b] == c)
			return (s + b);
	if (s[b] == c)
		return (s + b);
	return ('\0');
}
