#include "dog.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_dog - entry point
 * @d: structure to free
 *
 * Description: whole structure
 *
 * Return: Nothing
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
	free((*d).name);
	free((*d).owner);
	free(d);
	}
}
