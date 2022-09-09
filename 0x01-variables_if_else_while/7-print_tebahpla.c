#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - whatever you do
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char okay;

	for (okay = 'z'; okay >= 'a'; okay--)
		putchar(okay);
	putchar('\n');

	return (0);
}
