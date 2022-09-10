#include <stdio.h>

/**
 * main - print tripple combinations
 *
 * Descriptions: print tripple digit combinations
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int q, r, s;

	q = 48;
	r = 48;
	s = 48;
	while (q < 58)
	{
		r = q + 1;
		while (r < 58)
		{
			s = r + 1;
			while (s < 58)
			{

				putchar(q);

				putchar(r);

				putchar(s);
				if (q < 55 || r < 56 || s < 57)
				{

					putchar(44);

					putchar(32);

					q++;

				}

				r++;

			}

			s++;

			putchar(10);

			return (0);
		}


