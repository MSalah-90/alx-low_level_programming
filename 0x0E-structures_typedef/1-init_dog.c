#include "dog.h"
#include <stdio.h>

/**
 * init_dog - entry point
 * @d: struct dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Description: whole structure
 *
 * Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
}
