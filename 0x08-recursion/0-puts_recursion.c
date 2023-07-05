#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _puts_recursion - Entry Point
 * @s: input string of chars
 *
 *
 * Description: prints a string, followed by a new line.
 *
 *
 * Return: Nothing
 *
*/


void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
	else
		_putchar('\n');

}
