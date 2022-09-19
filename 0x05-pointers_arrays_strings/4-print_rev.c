#include "main.h"

/**
 * print_rev - print a string, reverse, followed by new line
 * @s: input string.
 * Return: no return
 */
void print_rev(char *s)
{
	int get;

	for (get = 0; s[get] != '\0'; get++)
	{
	}
	for (get = get - 1; get >= 0; get--)
	{
		_putchar(s[get]);
	}

	_putchar('\n');
}
