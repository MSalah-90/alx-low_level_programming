#include <stdio.h>
#include "main.h"

/**
 * *_strncat - Entry Point
 * @dest: destination array
 * @src: source array
 * @n: only n bytes from src
 *
 * Description: append src to dest with only n bytes from src
 *
 * Return: pointer of dest
 *
*/

char *_strncat(char *dest, char *src, int n)
{
	int d, s;

	d = 0;
	while (dest[d])
		d++;

	s = 0;
	while (src[s] && s < n)
	{
		dest[d] = src[s];
		d++;
		s++;
	}

	dest[d] = '\0';
	return (dest);
}

