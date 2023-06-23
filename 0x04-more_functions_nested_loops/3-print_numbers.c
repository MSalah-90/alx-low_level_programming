#include <stdio.h>
#include "main.h"

/**
 * print_numbers -  Entry - point
 *
 * Describtion: print_numbers prints nums from 0 to 9
 *
 * Return: Nothing (success)
*/

void print_numbers(void)
{
		int i;

		for (i = 0; i < 10; i++)
			_putchar(i + 48);

		_putchar('\n');
}
