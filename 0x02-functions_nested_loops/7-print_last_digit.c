#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - entry point
 * @n: is the input
 * Description: prints last digit of a number
 *
 * Return: 0 (success)
*/

int print_last_digit(int n)
{
	int x = n;

	if (x < 0)
		x = -1 * (x % 10);
	else
		x = x % 10;

	_putchar(x + 48);
	return (x);
}
