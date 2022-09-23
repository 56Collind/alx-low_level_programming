#include "main.h"
/**
 * _strncat - concatenates two string.
 * @dest: destination
 * @src: source.
 * @n: amount of bytes used from src.
 * Return: the pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int cast = 0, int cast1 = 0;

	while (*(dest + cast) != '\0')
	{
		cast++;
	}
	while (cast1 < n)
	{
		*(dest + cast) = *(src + cast1);
		if (*(src + cast1) == '\n')
			break;
		cast++;
		cast1++;
	}
	return (dest);
}
