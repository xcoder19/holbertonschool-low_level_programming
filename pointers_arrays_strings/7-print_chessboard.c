
#include "main.h"

/**
 * print_chessboard - print a chessboard
 * @a: pointer char
 */

void print_chessboard(char (*a)[8])
{

	int i, j;
	while (i < 8)
	{
		while (j < 8)
		{
			putchar(a[i][j]);
			j++;
		}
		i++;
	}
}
