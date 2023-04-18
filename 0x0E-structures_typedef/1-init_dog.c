#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Initailizes a dog
 * @d: structure variable
 * @name: name of the dog
 * @age: dog's age
 * @owner: dogs owner
 *
 * Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}
		d->name = name;
		d->age = age;
		d->owner = owner;

}
