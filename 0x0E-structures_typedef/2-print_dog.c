#include "dog.h"
#include <stdio.h>

/**
 * print_dog - entry point
 * @d: struct dog
 *
 * Description: whole structure
 *
 * Return: nothing
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
