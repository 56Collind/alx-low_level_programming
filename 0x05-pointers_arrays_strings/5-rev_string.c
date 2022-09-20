#include <string.h>
#include "main.h"

/**
 * rev_string - function that reverse a string
 * @s: the print out character
 * Return: reverse string
 */

void rev_string(char *s)
{
	int m = strlen(str) - 1, n = 0;
	char tmp;

	while (m > n)
	{
		tmp = str[m];
		str[m] = str[n];
		str[n] = tmp;
		m--;
		n++;
	}
}


