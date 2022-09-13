#include "main.h"
/**
 * print_alphabet_x10 - print 10 times the alphabet
 *
 * Return: Nothing.
 */
void print_alphabet_x10(void)
{
	char low;
	int i = 0;

	while (i <= 9)
	{
		for (low = 'a'; low <= 'z'; low++)
		{
			_putchar(low);
		}
		_putchar('\n');
		i++;
	}

