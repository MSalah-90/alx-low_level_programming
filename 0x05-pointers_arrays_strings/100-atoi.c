#include <stdio.h>
#include "main.h"
#include <unistd.h>
#include <math.h>

/**
 * *_strcpy - entry point
 * @dest: is the return string
 * @src: is the input string
 *
 * Description: copies the string pointed to by src, including the terminating
 * null byte (\0),to the buffer pointed to by dest.
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i, j;

	for (i = 0; src[i] != '\0'; i++)
		;
	for (j = 0; j < i; j++)
		dest[j] = src[j];
	dest[i] = '\0';
	return (dest);
}
