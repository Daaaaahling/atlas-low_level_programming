#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 * new_dog - creates new dog
 * @name: lilbowwow
 * @age: age
 * @owner: owner
 * Return: dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *lilbowwow;

	lilbowwow = malloc(sizeof(dog_t));
	if (lilbowwow == NULL)
	{
		return NULL;
	}

	lilbowwow->name = (char *)malloc(strlen(name) + 1);
	if (lilbowwow->name == NULL)
	{
		free(lilbowwow);
		return NULL;
	}

	lilbowwow->owner = (char *)malloc(strlen(owner) + 1);
	if (lilbowwow->owner == NULL)
	{
		free(lilbowwow->name);
		free(lilbowwow);
		return NULL;
	}
	strncpy(lilbowwow->owner, owner, strlen(owner) + 1);
	
	lilbowwow->age = age;

	return lilbowwow;
}
