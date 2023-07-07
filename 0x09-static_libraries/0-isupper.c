#include <stdio.h>
#include "main.h"

/**
 * _isupper -  Entry - point
 *
 * @c: is the input char
 *
 * Describtion: _isupper checks if entered char is upper case
 *
 * Return: (1) success and (0) failure
*/

int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);
	else
		return (0);
}
