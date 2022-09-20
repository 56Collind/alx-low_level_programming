#include <string.h>
#include "main.h"

/**
 * puts_half - print half of a string
 * @s: pointer to the string variables
 * Return: null
 */
void puts_half(char *s)
{
	int gets = strlen(s), b;

	if (gets % 2 == 0)
	{
		for (b = gets / 2; b < gets; b++)
			_putchar(s[b]);
	}
	else
	{
		for (b = gets / 2 + 1; b < gets; b++)
			_putchar(s[b]);
	}
	_putchar('\n');
}
