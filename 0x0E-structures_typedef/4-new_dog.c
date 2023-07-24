#include "dog.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"
/**
 * new_dog - entry point
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Description: whole structure
 *
 * Return: pointer dog_t
 */
/**
char *_strcpy(char *dest, char *src)
{
        int l = 0;
        int x = 0;


        while (*(src + l) != '\0')
        {
                l++;
        }
        for ( ; x < l ; x++)
        {
                dest[x] = src[x];
        }
        dest[l] = '\0';
        return (dest);
}

int _strlen(char *s)
{
        int longi = 0;


        while (*s != '\0')
        {
                longi++;
                s++;
        }


        return (longi);
}
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *x;
	int s_name, s_owner;

	x = malloc(sizeof(dog_t));

		if (x == NULL)
			return (NULL);

	s_name = strlen(name);
        s_owner = strlen(owner);

	(*x).name = malloc(sizeof(char) * s_name + 1);

		if ((*x).name == NULL)
		{
			free(x);
			return (NULL);
		}

	(*x).owner = malloc(sizeof(char) * s_owner + 1);

		if ((*x).owner == NULL)
		{
			free(x);
			free((*x).name);
			return (NULL);
		}
(*x).name = strcpy((*x).name, name);
(*x).owner = strcpy((*x).owner, owner);
(*x).age = age;

return (x);
}
