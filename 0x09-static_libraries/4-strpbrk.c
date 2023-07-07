#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strpbrk - Entry Point
 * @s: 1st array of chars
 * @accept: 2nd array of chars
 *
 *
 * Description: function locates the first occurrence in the string s
 * of any of the bytes in the string accept
 *
 *
 * Return: locates the first occurrence in the string s of any of the
 * bytes in the string accept
*/

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	j = 0;
	for (; s[j]; j++)
	{
		for (i = 0; accept[i]; i++)
		{
			if (accept[i] == s[j])
				return (s + j);
		}
	}
	return ('\0');
}
