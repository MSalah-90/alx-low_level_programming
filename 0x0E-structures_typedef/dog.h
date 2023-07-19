#ifndef DOG_H
#define DOG_H

/**
 * struct dog - main struct
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Description: new struct for dog details
 */




struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif