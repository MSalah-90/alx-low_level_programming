#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - entry point
 * @str: array of chars
 *
 *
 * Description: function returns a pointer to a new string
 * which is a duplicate of the string str
 *
 *
 * Return: Returns NULL if str = NULL
*/

char *_strdup(char *str)
{
	unsigned int i, j = 0;
	char *ptr;

	while (str[j] != '\0')
		j++;

	ptr = malloc((j + 1) * sizeof(char));

	if (ptr == NULL || str == NULL)
		return (NULL);

	i = 0;
		while (str[i])
		{
			ptr[i] = str[i];
			i++;
		}
return (ptr);
}
