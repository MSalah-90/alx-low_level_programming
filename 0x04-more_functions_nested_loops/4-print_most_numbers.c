#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers -  Entry - point
 *
 * Describtion: print_most_numbers prints nums from 0 to 9 except 2 & 4
 *
 * Return: Nothing (success)
*/

void print_most_numbers(void)
{
		int i;

		for (i = 0; i < 10; i++)
		{
			if (i != 2 && i != 4)
			{
			_putchar(i + 48);
			}
		}
		_putchar('\n');
}
