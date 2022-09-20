#include "main.h"

/**
 * rev_string - revserse a string
 * @s: input string
 * Return: 0
 */
void rev_string(char *s)
{
	int see = 0, c, j;
	char *str, tmp;

	while (see >= 0)
	{
		if (s[see] == '\0')
			break;
		see++;
	}
	str = s;

	for (c = 0; c < (see - 1); c++)
	{
		for (j = c + 1; j > 0; j--)
		{
			tmp = *(str + j);
			*(str + j) = *(str + (j - 1));

			*(str + (j - 1)) = tmp;
		}
	}
}
