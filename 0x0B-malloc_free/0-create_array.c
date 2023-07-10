#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - entry point
 * @size: size of array
 * @c: char
 *
 *
 * Description: creates an array of chars,
 * and initializes it with a specific char.
 *
 *
 * Return: a pointer to the array, or NULL if it fails
 *
*/

char *create_array(unsigned int size, char c)
{
	char *ptr = malloc(size * sizeof(char));
	unsigned int i;

	if (ptr == NULL || size == 0)
		return (NULL);

	i = 0;
		while (i < size)
		{
			ptr[i] = c;
			i++;
		}

return (ptr);
}
