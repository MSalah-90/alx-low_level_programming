#include <stdio.h>
#include "main.h"

/**
 * _isdigit -  Entry - point
 *
 * @c: is the input char
 *
 * Describtion: _isdigit checks if entered char is digit
 *
 * Return: (1) success and (0) failure
*/

int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}
