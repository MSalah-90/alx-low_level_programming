#include <stdio.h>
#include "main.h"

/**
 * swap_int - entry point
 * @a: is the int input
 * @b: is the int input
 *
 * Description: swap the value of two pointer
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int a1 = *a;
	int b1 = *b;

	*a = b1;
	*b = a1;
}
