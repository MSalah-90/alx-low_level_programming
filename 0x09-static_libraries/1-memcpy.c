#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _memcpy - Entry Point
 * @dest: destination array of chars
 * @src: source array of chars
 * @n: the first n bytes
 *
 *
 * Description: function copies n bytes from src to dest
 *
 *
 * Return: a pointer to the memory area dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;

	j = 0;
	for (; j < n; j++)
		dest[j] = src[j];

	return (dest);
}
