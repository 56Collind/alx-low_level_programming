#include "main.h"

/**
 * *_strcat - function commuting strings
 * *@dest: parameter pointer to char
 * @src: parameter pointer to char
 * Return: value of dest
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int c;

	i = 0;
	c = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[c] != '\0')
	{
		dest[i] = src[c];
		c++;
		i++;
	}

	dest[i] = '\0';
	return (dest);
}
