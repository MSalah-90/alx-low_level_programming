#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * sq - Entry Point
 * @n: input int
 * @i: input counter
 *
 * Description: returns the natural square root of a number
 *
 *
 * Return: if n does not have a natural square root,
 * the function should return -1
 *
*/

int sq(int n, int i)
{
	if (i * i < n)
		return (sq(n, i + 1));

	else if (i * i == n)
		return (i);

return (-1);
}

/**
 * _sqrt_recursion - Entry Point
 * @n: input int
 *
 *
 * Description: returns the natural square root of a number
 *
 *
 * Return: if n does not have a natural square root,
 * the function should return -1
 *
*/

int _sqrt_recursion(int n)
{
	return (sq(n, 1));
}
