#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_10x - entry point
 *
 * Description: prints all alphabet small letters 10 times
 *
 * Return: (success)
*/

void print_alphabet_10x(void)
{
	int i, alpha;

	for (i = 0; i < 10; i++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
	}
}
