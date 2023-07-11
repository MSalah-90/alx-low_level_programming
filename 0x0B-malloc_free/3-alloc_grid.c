#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - entry point
 * @width: array of chars
 * @height: another array of chars
 *
 *
 * Description: function a pointer to a 2 dimensional array of integers.
 *
 *
 * Return: The function should return NULL on failure
 * If width or height is 0 or negative, return NULL
 *
*/

int **alloc_grid(int width, int height)
	{
	int **ptr;
	int i, j;


	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = malloc(height * sizeof(int));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(sizeof(int) * width);

		if (ptr[i] == NULL)
		{
			for (; i >= 0; i--)
				free(ptr[i]);

			free(ptr);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			ptr[i][j] = 0;
		}

	}
	return (ptr);
}

