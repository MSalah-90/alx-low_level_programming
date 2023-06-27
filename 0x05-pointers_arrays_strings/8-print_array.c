#include <stdio.h>
#include "main.h"
#include <unistd.h>
#include <math.h>

/**
 * print_array - entry point
 * @a: is the int input array
 * @n: is the size of array
 *
 * Description: prints n elements of an array of integers
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int j = 0;

	while (j < n - 1)
	{
		printf("%d, ", a[j]);
		j += 1;
	}

	if (j == n - 1)
		printf("%d", a[n - 1]);

	printf("\n");
}
