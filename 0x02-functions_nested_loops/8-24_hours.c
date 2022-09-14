#include "main.h"

/**
 * jack_bauer - listen to this sound track while decoding
 *
 * Return: nothing.
 */
void jack_bauer(void)
{
	int F, G;

	for (F = 0; F < 24; F++)
	{
		for (G = 0; G < 60; G++)
		{
			_putchar((F / 10) + '0');
			_putchar((F % 10) + '0');
			_putchar(':');
			_putchar((G / 10) + '0');
			_putchar((G % 10) + '0');
			_putchar('\n');
		}
	}
}
