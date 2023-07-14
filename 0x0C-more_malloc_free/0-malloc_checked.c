#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - entry point
 * @b: size of malloc
 *
 * Description: Returns a pointer to the allocated memory
 *
 * Return: if malloc fails, the malloc_checked function should
 * cause normal process termination with a status value of 98
 *
 */



void *malloc_checked(unsigned int b)
{
	int *var = malloc(b);

	if (var == NULL)
		exit(98);

	return (var);

}
