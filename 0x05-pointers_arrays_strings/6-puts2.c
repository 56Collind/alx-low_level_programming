#include "main.h"

/**
 * puts2 - print alternating chars of string
 * @str: string, is the parameter passed
 * Return: void
 */
void puts2(char *str)
{
	int a;

	a = 0;
		while (str[a] != '\0')
		{
			if (a % 2 == 0)
				_putchar(str[a]);
			a++;
		}
	_putchar('\n');
}
