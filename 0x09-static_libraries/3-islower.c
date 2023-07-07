#include <stdio.h>
#include "main.h"

/**
 * _islower - entry point
 * @c: is the input
 * Description: checks if char is lowercase
 *
 * Return: 0 (fail), 1 (success)
*/

int _islower(int c)
{
	int x = c;

	if (x > 96 && x < 123)

		return (1);

	else

		return (0);
}
