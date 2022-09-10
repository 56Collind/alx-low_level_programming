#include <stdio.h>

/**
 * main - print triple combinations
 *
 * Description: Print triple digit combinations
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int m, n, o;

	m = 48;
	n = 48;
	o = 48;
	while (m < 58)
	{
		n = m + 1;
		while (n < 58)
		{
			o = n + 1;
			while (o < 58)
			{
				putchar(m);

				putchar(n);

				putchar(o);
				if (m < 55 || n < 56 || o < 57)
				{
					putchar(44);

					putchar(32);

					m++;

				}

				n++;

			}

			o++;

		}

		putchar(10);

		return (0);
	}
