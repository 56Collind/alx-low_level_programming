#include "main.h"
/**
 * main - print alphabet in lower cases
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char lower;
	for (lower = 'a'; lower <= 'z'; lower++)
	{
		_putchar(lower);
		_putchar('\n');
	}
	return (0);
}
