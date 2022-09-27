#include "main.h"

/**
 * _strspn - get the length of a prefix substring
 * @s: initial segment
 * @accept: accept bytes
 * Return: the number accepted bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a, b, bool;

	for (a = 0; *(s + a) != '\0'; a++)
	{
		bool = 1;
		for (b = 0; *(accept + b) != '\0'; b++)
		{
			if (*(s + a) == *(accept + b))
			{
				bool = 0;

				break;
			}
		}
		if (bool == 1)
			break;
	}
	return (a);
}
