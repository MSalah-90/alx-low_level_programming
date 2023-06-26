#include <stdio.h>
#include "main.h"
#include <unistd.h>
#include <math.h>

/**
 * print_rev - entry point
 * @s: is the char input
 *
 * Description: prints string of char in reverse
 *
 * Return: void
 */

void print_rev(char *s)
{
	int len = 0;

	while (s[len])
		len++;

	while (len--)
	{
		_putchar(s[len]);
	}
	_putchar('\n');
}
