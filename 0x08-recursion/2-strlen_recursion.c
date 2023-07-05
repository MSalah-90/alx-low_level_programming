#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strlen_recursion - Entry Point
 * @s: input string of chars
 *
 *
 * Description: returns the length of a string
 *
 *
 * Return: Nothing
 *
*/

int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s != '\0')
	{
		count++;
		count += _strlen_recursion(s + 1);
	}
return (count);
}
