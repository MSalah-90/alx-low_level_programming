#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * *_strcmp - Entry Point
 * @s1: first array
 * @s2: second array
 *
 * Description: compare two arrays of chars
 *
 * Return: 0 if two arrays are equal
 *
*/

int _strcmp(char *s1, char *s2)
{
	int s;

	s = 0;
	while (s1[s] && s2[s])
	{
		if ((s1[s] - s2[s]) != 0)
			return (s1[s] - s2[s]);
		s++;
	}
return (0);
}
