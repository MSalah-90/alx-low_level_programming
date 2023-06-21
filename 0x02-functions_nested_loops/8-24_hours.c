#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - entry point
 *
 * Description: prints every minute of the day
 *
 * Return: 0 (success)
*/

void jack_bauer(void)
{
	int a, b, c, d, x, y;

	for (x = 0; x < 24; x++)
	{
		for (y = 0; y < 60; y++)
		{

			a = x / 10;
			b = x % 10;
			c = y / 10;
			d = y % 10;
			_putchar(a + 48);
			_putchar(b + 48);
			_putchar(':');
			_putchar(c + 48);
			_putchar(d + 48);
			_putchar('\n');

		}

	}
}
