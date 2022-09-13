#include "main.h"
/**
 * _islower - Returns 1 if c is lowercase
 * @c: An input character
 *
 * Return: 1 if lowercase or 0 if uppercase
 */
int _islower(int c)
{
	char m;
	int lower = 0;

	for (m = 'a'; m <= 'z'; m++)
	{
		if (m == c)
			lower = 1;
	}
	return (lower);
}
