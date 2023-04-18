#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 * new_dog - Creates a new dog
 * @name: hrhrfh
 * @age: yhfshfhsf
 * @owner: jdsjhsfjsf
 *
 * Return: Nothing
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int ln1, ln2;

	ln1 = strlen(name) + 1;
	ln2 = strlen(owner) + 1;
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		return (NULL);
	}
	dog->name = malloc(sizeof(char) * ln1);
	if (dog->name == NULL)
	{
		free(dog->name);
		return (NULL);
	}
	dog->owner =  malloc(sizeof(char) * ln2);
	if (dog->owner == NULL)
	{
		free(dog->owner);
		return (NULL);
	}
	strcpy(dog->name, name);
	strcpy(dog->owner, owner);
	dog->age = age;
	return (dog);
}
