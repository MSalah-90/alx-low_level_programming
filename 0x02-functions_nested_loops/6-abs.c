#include <stdio.h>
#include "main.h"

/**
 * _abs - entry point
 * @n: is the input
 * Description: prints absolute value of a number
 *
 * Return: 0 (success)
*/

int _abs(int n)
{
	int x = n;

	if (x < 0)
	{
		x = x * -1;
		return (x);
	}
	else if (x == 0)
	{
		return (0);
	}
	else
	{
		return (x);
	}
}
