#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _print_rev_recursion - Entry Point
 * @s: input string of chars
 *
 *
 * Description: prints a string in reverse
 *
 *
 * Return: Nothing
 *
*/

void _print_rev_recursion(char *s)
{

	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
