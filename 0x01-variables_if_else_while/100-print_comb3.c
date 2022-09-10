#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int g;

	for (g = 1; g < 100; g++)
	{
		putchar((g / 10) + '0');
		putchar((g % 10) + '0');
		if (g != 99)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
