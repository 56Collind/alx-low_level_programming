#include "main.h"
/**
 * _isalpha - Return 1 if c is a letter, lowercase or uppercase
 * @c: input character
 * lowercase or uppercase
 * Return: 1 if c is a letter
 */
int _isalpha(int c)
{
	char i, k;
	int lower = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		for (k = 'A'; k <= 'Z'; k++)
		{
			if (c == i || c == k)
				lower = 1;
		}
	}
	return (lower);
}
