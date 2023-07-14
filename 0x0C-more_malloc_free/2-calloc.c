#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * _calloc - entry point
 * @nmemb: size of array
 * @size: size of type
 *
 * Description:  function allocates memory for an array of nmemb elements of
 * size bytes each and returns a pointer to the allocated memory.
 *
 * Return: The memory is set to zero. If nmemb or size is 0, then _calloc
 * returns NULL. If malloc fails, then _calloc returns NULL
 *
 */


void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *var;

	if (nmemb == 0 || size == 0)
		return (NULL);

	var = malloc(sizeof(int) * nmemb + 1);

	if (var == NULL)
		return (NULL);

	i = 0;
	while (var[i])
	{
		var[i] = 0;
		i++;
	}
	var[i] = '\0';
	return (var);
}
