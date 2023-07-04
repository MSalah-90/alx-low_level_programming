#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * print_chessboard - Entry Point
 * @a: array of chars
 *
 *
 * Description: function prints the chessboard
 *
 *
 * Return Nothing
*/

void print_chessboard(char (*a)[8])
{
	int i, j;

	i = 0;
	for (; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			putchar(a[i][j]);
		}
		putchar('\n');
	}
}
