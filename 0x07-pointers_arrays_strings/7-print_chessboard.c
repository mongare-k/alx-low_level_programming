#include "main.h"

/**
 * print_chessboard - Print the chessboard
 * @a: array of pieces
 *
 * Return: Nothing.
 */
void print_chessboard(char (*a)[8])
{
	int c = 0, d;

	for (; c < 8; c++)
	{
		for (d = 0; d < 8; d++)
			_putchar(a[c][d]);
		_putchar('\n');
	}
}
