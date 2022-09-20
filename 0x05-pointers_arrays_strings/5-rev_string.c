#include <string.h>
#include "main.h"

/**
 * rev_string - reverse string
 * @str: string to be reversed
 */
void rev_string(char *str)
{
	int k = strlen(str) - 1, j = 0;
	char tmp;

	while (k > j)
	{
		tmp = str[k];
		str[k] = str[j];
		str[j] = tmp;
		k--;
		j++;
	}
}
