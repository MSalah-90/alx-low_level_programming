#include <stdio.h>
#include "main.h"

/**
 * print_sign - entry point
 * @n: is the input
 * Description: prints sign of a number
 *
 * Return: 0 (fail), 1 (success)
*/

int print_sign(int n)
{
	int x = n;

	if (x > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (x == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
