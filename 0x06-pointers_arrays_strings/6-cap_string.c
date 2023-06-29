#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * *cap_string - Entry Point
 *
 * @n: name of array
 *
 * Description: upper case each word of array
 *
 * Return: mod array
 *
*/

char *cap_string(char *n)
	{
	int i = 0;

	while (n[i])
	{
		while (!(n[i] >= 'a' && n[i] <= 'z'))
			i++;

		if (n[i - 1] == ' ' ||
		    n[i - 1] == '\t' ||
		    n[i - 1] == '\n' ||
		    n[i - 1] == ',' ||
		    n[i - 1] == ';' ||
		    n[i - 1] == '.' ||
		    n[i - 1] == '!' ||
		    n[i - 1] == '?' ||
		    n[i - 1] == '"' ||
		    n[i - 1] == '(' ||
		    n[i - 1] == ')' ||
		    n[i - 1] == '{' ||
		    n[i - 1] == '}' ||
		    i == 0)
			n[i] -= 32;

		i++;
	}

	return (n);
	}
