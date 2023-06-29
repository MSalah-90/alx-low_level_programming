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
	int i, j;

	i = 0;
	while (n[i])
		i++;

	for (j = 0; j < i; j++)
	{
		if ((n[j] > 96) && (n[j] < 123) &&
		((n[j - 1] == ' ') ||
		(n[j - 1] == '\t') ||
		(n[j - 1] == '\n') ||
		(n[j - 1] == '.') ||
		(n[j - 1] == ',') ||
		(n[j - 1] == ';') ||
		(n[j - 1] == '!') ||
		(n[j - 1] == '?') ||
		(n[j - 1] == '"') ||
		(n[j - 1] == '{') ||
		(n[j - 1] == '}') ||
		(n[j - 1] == '(') ||
		(n[j - 1] == ')')))
	n[j] -= 32;
	}
	return (n);
}
