#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strspn - Entry Point
 * @s: 1st array of chars
 * @accept: 2nd array of chars
 *
 *
 * Description: function gets the length of a prefix substring
 *
 *
 * Return: no of bytes initially of s which consist only of bytes from accept
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int j, i;

	j = 0;
	for (; s[j]; j++)
	{
		for (i = 0; accept[i] != s[j]; i++)
		{
			if (accept[i] == '\0')
				return (j);
		}
	}
	return (j);
}
