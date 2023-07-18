#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *new_dog - creates a new dog.
 * @name: pointer to a char for name of dog
 * @age: age of dog
 * @owner: pointer to a char for owner of dog
 * Return: pointer to a new dog of type dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int nameLen, ownerLen, i;
	dog_t *d;

	d = (dog_t *)malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	nameLen = ownerLen = 0;
	while (name[nameLen++])
		;
	while (owner[ownerLen++])
		;
	d->name = malloc(nameLen * sizeof(d->name));
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	for (i = 0; i <= nameLen; i++)
		d->name[i] = name[i];
	d->age = age;
	d->owner = malloc(ownerLen * sizeof(d->owner));
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	for (i = 0; i <= ownerLen; i++)
		d->owner[i] = owner[i];
	return (d);
}
