#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * array_range - entry point
 * @min: min int
 * @max: max int
 *
 * Description: array created should contain all the values
 * from min (included) to max (included), ordered from min to max
 *
 * Return: the pointer to the newly created array
 * If min > max, return NULL
 * If malloc fails, return NULL
 *
 */

int *array_range(int min, int max)
{
	int i, t;
	int *var;

	if (min > max)
		return (NULL);

	var = malloc(sizeof(int) * (max - min + 1));

	if (var == NULL)
		return (NULL);

	i = 0;
	t = min;
	while (i < max - min)
	{
		var[i] = t;
		i++;
		t++;
	}
	var[i] = max;
	return (var);
}
