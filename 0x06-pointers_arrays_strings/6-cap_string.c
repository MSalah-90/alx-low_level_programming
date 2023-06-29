#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * *cap_string - Entry Point
 *
 * @n: name of array
 *
 * Description: upper case each word of array
 *
 * Return: mod array
 *
*/

char *cap_string(char *n)
{
	int i, j, x;

	char a[13];
a[0] = ' ';
a[1] = '\t';
a[2] = '\n';
a[3] = '.';
a[4] = ',';
a[5] = ';';
a[6] = '!';
a[7] = '?';
a[8] = '"';
a[9] = '{';
a[10] = '}';
a[11] = '(';
a[12] = ')';

	i = 0;
	while (n[i])
		i++;

	for (j = 0; j < i; j++)
	{
			x = 0;
			while (a[x] != '\0')
			{
				if ((n[j] > 96) && (n[j] < 123) && (n[j - 1] == a[x] || j == 0))
				{
					n[j] -= 32;

				}
				x++;
			}


	}
	return (n);
}
