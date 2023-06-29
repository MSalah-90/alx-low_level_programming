#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * reverse_array - Entry Point
 * @a: array
 * @n: size of array
 *
 * Description: reverses the order of array
 *
 * Return: Nothing
 *
*/

void reverse_array(int *a, int n)
{
	int i, j, tmp;

	j = n - 1;
	for (i = 0; i < j; i++)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
		j--;
	}
}
