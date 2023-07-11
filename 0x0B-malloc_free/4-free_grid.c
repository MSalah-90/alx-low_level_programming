#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - entry point
 * @grid: array to be freed
 * @height: height of array
 *
 *
 * Description: frees up memory for a 2 dimensional array of integers.
 *
 *
 * Return: Nothing
 *
*/

void free_grid(int **grid, int height)
	{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
	}
