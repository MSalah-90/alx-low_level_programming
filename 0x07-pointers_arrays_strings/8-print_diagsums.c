#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * print_diagsums - Entry Point
 * @a: array of chars
 * @size: size of square array
 *
 * Description: function prints the sum of the two diagonals of
 * a square matrix of integers.
 *
 *
 * Return Nothing
*/

void print_diagsums(int *a, int size)
{
	int x, sum, sum2;

	sum = 0;
	sum2 = 0;

	for (x = 0; x < size; x++)
	{
		sum += a[x];
		sum2 += a[size - 1 - x];
		a += size;
	}
	printf("%d, %d\n", sum, sum2);
}
