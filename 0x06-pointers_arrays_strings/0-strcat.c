#include <stdio.h>
#include "main.h"

/**
 * *_strcat - Entry Point
 * @dest: destination array
 * @src: source array
 *
 * Description: append src to dest
 *
 * Return: pointer of dest
 *
*/

char *_strcat(char *dest, char *src)
{
	int d, s;

	d = 0;
	while (dest[d])
		d++;

	s = 0;
	while (src[s])
	{
		dest[d] = src[s];
		d++;
		s++;
	}

	dest[d] = '\0';
	return (dest);
}

