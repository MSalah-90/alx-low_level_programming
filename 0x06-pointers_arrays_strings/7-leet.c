#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * *leet - Entry Point
 *
 * @n: name of array
 *
 * Description: 1337 encryption of array A, E, O, T, L
 * * replaced by 4, 3, 0, 7, 1
 *
 * Return: mod array
 *
*/

char *leet(char *n)
{
	int i = 0;
	int j;

	char a[] = {'a', 'e', 'o', 't', 'l'};
	char b[] = {4, 3, 0, 7, 1};

	while (n[i])
	{
		j = 0;

		while (a[j])
		{
			if ((n[i] == a[j]) || (n[i] == a[j] - 32))

				n[i] = b[j] + 48;
			j++;
		}
		i++;
	}
	return (n);
	}
