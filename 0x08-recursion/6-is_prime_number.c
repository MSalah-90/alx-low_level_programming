#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * prm - Entry Point
 * @n: input int
 * @i: counter
 *
 * Description: function that returns 1 if the input integer
 * is a prime number, otherwise return 0.
 *
 *
 * Return: function that returns 1 if the input integer is
 * a prime number, otherwise return 0.
 *
*/

int prm(int n, int i)
{
	if (i >= n && n > 1)
		return (1);

	else if (n % i == 0 || n <= 1)
		return (0);
	else
		return (prm(n, i + 1));
}

/**
 * is_prime_number - Entry Point
 * @n: input int
 *
 *
 * Description: function that returns 1 if the input integer is
 * a prime number, otherwise return 0.
 *
 *
 * Return: function that returns 1 if the input integer is
 * a prime number, otherwise return 0.
 *
*/

int is_prime_number(int n)
{
	return (prm(n, 2));
}
