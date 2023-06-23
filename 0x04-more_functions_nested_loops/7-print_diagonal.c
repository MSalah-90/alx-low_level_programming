#include <stdio.h>
#include "main.h"

/**
 * print_diagonal -  Entry - point
 * @n: is the input
 * Description: print_diagonal prints \ n times
 *
 * Return: Nothing (success)
*/

void print_diagonal(int n)
{
	int i, num;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			num = i;

			while (num > 0)
			{
				_putchar(' ');
				num--;
			}

			_putchar('\\');
			_putchar('\n');
		}

	}
	else
		_putchar('\n');
}
