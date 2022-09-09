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
	int m;
	char herr;

	for (m = '0'; m <= '9'; m++)
		putchar(m);
	for (herr = 'a'; herr <= 'f'; herr++)
		putchar(herr);
	putchar('\n');

	return (0);
}
