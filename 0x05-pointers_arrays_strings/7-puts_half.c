#include <stdio.h>
#include "main.h"
#include <unistd.h>
#include <math.h>

/**
 * puts_half - entry point
 * @str: is the char input
 *
 * Description: prints second half of a string
 *
 * Return: void
 */

void puts_half(char *str)
{
	int i;
	int j;

	for (i = 0; str[i] != '\0'; i++)
		;

	if (i % 2 == 0)
	{
		for (j = i / 2; j < i; j++)
		{
			_putchar(str[j] + 0);
		}
		_putchar('\n');
	}
	else
	{
		for (j = (i - 1) / 2; j < i; j++)
		{
			_putchar(str[j] + 0);
		}
		_putchar('\n');

	}
}
