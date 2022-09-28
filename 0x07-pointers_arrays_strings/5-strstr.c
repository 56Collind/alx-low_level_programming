#include "main.h"

/**
 * _strstr - finds the first occurence of the substring.
 * needle in the string haystack
 * @haystack: entire string.
 * @needle: substring.
 * Return: pointer to the beginning of located substring
 */
char *_strstr(char *haystack, char *needle)
{
	char *okaystack;
	char *sneedle;

	while (*haystack != '\0')
	{
		okaystack = haystack;
		sneedle = needle;

		while (*haystack != '\0' && *sneedle != '\0' && *haystack == *sneedle)
		{
			haystack++;
			sneedle++;
		}
		if (!*sneedle)
			return (okaystack);
		haystack = okaystack + 1;
	}
	return (0);
}
