#include <stdio.h>
#include "main.h"

/**
 * _strlen - entry point
 * @s: is the char input
 *
 * Description: determine length of string
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len += 1;
		s++;
	}
	return (len);
}
