#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - create a new dog
 * @name: dog name
 * @age: dog age
 * @owner: owner name
 * Return: dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog_who_dis;

	new_dog_who_dis = malloc(sizeof(dog_t));
	if (new_dog_who_dis == NULL)
	{
		return NULL;
	}

	new_dog_who_dis->name = strdup(name);
	if (new_dog_who_dis->name == NULL)
	{
		free(new_dog_who_dis);
		return NULL;
	}

	new_dog_who_dis->owner = strdup(owner);
	if (new_dog_who_dis->owner == NULL)
	{
		free(new_dog_who_dis->name);
		free(new_dog_who_dis);
		return NULL;
	}

	new_dog_who_dis->age = age;

	return new_dog_who_dis;
}
