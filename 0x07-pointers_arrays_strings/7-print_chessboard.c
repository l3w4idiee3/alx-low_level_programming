#include "main.h"
#include <string.h>

/**
 * print_chessboard - print chessboard from array of pieces and locations
 * @a: 2D array of pieces and locations
 */
void print_chessboard(char (*a)[8])
{
	int y, x;

	y = 0;
	while (y < 8)
	{
		x = 0;
		while (x < 8)
		{
			_putchar(a[y][x]);
			x++;
		}
		_putchar('\n');
		y++;
	}
}
