#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - entry point
 *
 * Description: prints all alphabet small letters
 *
 * Return: 0 (success)
*/

void print_alphabet(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
}
