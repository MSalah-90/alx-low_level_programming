#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strchr - Entry Point
 * @s: input array of chars
 * @c: search this char in the given array
 *
 *
 * Description: function searches c char in string s
 *
 *
 * Return: a pointer to first occurence of c in s (not found): NULL
*/

char *_strchr(char *s, char c)
{
	unsigned int j;

	j = 0;
	for (; s[j] > '\0'; j++)
	{
		if (s[j] == c)
			return (s + j);
	}
	return (NULL);
}
