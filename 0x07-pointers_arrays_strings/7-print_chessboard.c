#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: input pointer
 * Return: no return
 */
void print_chessboard(char (*a)[8])
{
	unsigned int k, c = 0;

	for (k = 0; k < 64; k++)
	{
		if (k % 8 == 0 && k != 0)
		{
			c = k;
			_putchar('\n');
		}
		_putchar(a[k / 8][k - c]);
	}
	_putchar('\n');
}
