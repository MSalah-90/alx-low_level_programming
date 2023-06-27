#include <stdio.h>
#include "main.h"
#include <unistd.h>
#include <math.h>

/**
 * rev_string - entry point
 * @s: is the char input
 *
 * Description: prints string of char in reverse
 *
 * Return: void
 */

void rev_string(char *s)
{
	char rev = s[0];
	int i;
	int j = 0;

	for (i = 0; s[i] != '\0'; i++)
		;

	while (i-- && j < i)
	{
		rev = s[j];
		s[j] = s[i];
		s[i] = rev;
		j++;
	}
}

