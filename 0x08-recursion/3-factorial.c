#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * factorial - Entry Point
 * @n: input int
 *
 *
 * Description: returns the factorial of a given number
 *
 *
 * Return: If n is lower than 0, the function should
 * return -1 to indicate an error. Factorial of 0 is 1
 *
*/

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));

return (0);
}