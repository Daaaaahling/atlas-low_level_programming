#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "dog.h"

size_t my_strlen(const char *str)
{
	const char *s = str;
	while (*s)
		++s;
	return s - str;
}

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

	{
		size_t i;
		for (i = 0; i <= my_strlen(name); ++i)
		{
			lilbowwow->name[i] = name[i];
		}

	}
	lilbowwow->age = age;
	
	lilbowwow->owner = (char *)malloc(strlen(owner) + 1);
	if (lilbowwow->owner == NULL)
	{
		free(lilbowwow->name);
		free(lilbowwow);
		return NULL;
	}

	{
		size_t i;
		for (i = 0; i <= my_strlen(owner); ++i)
		{
			lilbowwow->owner[i] = owner[i];
		}
	}

	return lilbowwow;
}
