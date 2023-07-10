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
	char *ptr = malloc((sizeof(*str)) * sizeof(char));
	unsigned int i;

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
