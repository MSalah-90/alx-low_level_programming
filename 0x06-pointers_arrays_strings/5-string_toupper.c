#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * *string_toupper - Entry Point
 *
 * @n: name of array
 *
 * Description: upper case each element of array
 *
 * Return: Nothing
 *
*/

char *string_toupper(char *n)
{
	int i, j;

	i = 0;
	while (n[i])
		i++;

	for (j = 0; j < i; j++)
	{
		if (n[j] > 96 && n[j] < 123)
		n[j] -= 32;
	}
	return (n);
}
