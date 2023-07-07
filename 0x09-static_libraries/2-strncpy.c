#include <stdio.h>
#include "main.h"

/**
 * *_strncpy - Entry Point
 * @dest: destination array
 * @src: source array
 * @n: only n bytes from src
 *
 * Description: append src to dest with only n bytes from src
 *
 * Return: pointer of dest
 *
*/

char *_strncpy(char *dest, char *src, int n)
{
	int s;

	s = 0;
	while (src[s] && s < n)
	{
		dest[s] = src[s];
		s++;
	}

	while (s < n && dest[s])
	{
		dest[s] = '\0';
		s++;
	}


return (dest);
}
