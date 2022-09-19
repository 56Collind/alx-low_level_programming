#include "main.h"

/**
 * _strlen - the return of the length of a string
 * @s: input stringturn.
 * Return: length of a string.
 */
int _strlen(char *s)
{
	int string = 0;

	while (*(s + string) != '\0')
		string++;
	return (string);
}
