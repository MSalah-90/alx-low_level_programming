#include <stdio.h>
#include "main.h"
#include <unistd.h>
#include <math.h>

/**
 * _puts - entry point
 * @str: is the char input
 *
 * Description: prints string of char
 *
 * Return: void
 */

void _puts(char *str)
{
	while (*str != 0)
	{
		_putchar(*str + 0);
		str++;
	}
	_putchar('\n');
}
