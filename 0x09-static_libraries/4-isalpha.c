#include <stdio.h>
#include "main.h"

/**
 * _isalpha - entry point
 * @c: is the input
 * Description: checks if char is lowercase or upper case alphabet
 *
 * Return: 0 (fail), 1 (success)
*/

int _isalpha(int c)
{
	int x = c;

	if ((x > 96 && x < 123) || (x > 64 && x < 91))

		return (1);

	else

		return (0);
}
