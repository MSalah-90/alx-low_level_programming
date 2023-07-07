#include "main.h"

/**
 * _puts - entry point
 * @s: is the char input
 *
 * Description: prints string of char
 *
 * Return: void
 */

void _puts(char *s)
{
	while (*s != 0)
	{
		_putchar(*s + 0);
		s++;
	}
	_putchar('\n');
}
