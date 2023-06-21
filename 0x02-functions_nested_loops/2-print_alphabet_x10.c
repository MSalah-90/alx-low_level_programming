#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - entry point
 *
 * Description: prints all alphabet small letters ten times
 *
 * Return: 0 (success)
*/

void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		char alpha = 'a';

			while (alpha <= 'z')
			{
				_putchar(alpha);
				alpha++;
			}
		_putchar('\n');
	}
}
