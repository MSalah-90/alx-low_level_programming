#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _memset - Entry Point
 * @s: input array of chars
 * @b: the char to be replacing the ones in the array
 * @n: the first n bytes
 *
 *
 * Description: fills the first n bytes of s with the constant byte b
 *
 *
 * Return: a pointer to the memory area s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	j = 0;
	for (; j < n; j++)
		s[j] = b;

	return (s);
}
