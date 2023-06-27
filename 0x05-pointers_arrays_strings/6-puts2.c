#include <stdio.h>
#include "main.h"
#include <unistd.h>
#include <math.h>

/**
 * puts2 - entry point
 * @str: is the char input
 *
 * Description: prints every other char of a string
 *
 * Return: void
 */

void puts2(char *str)
{
	int i;
	int j = 0;

	for (i = 0; str[i] != '\0'; i++)
		;

	while (j < i)
	{
		_putchar(str[j] + 0);
		j += 2;
	}
	_putchar('\n');
}

