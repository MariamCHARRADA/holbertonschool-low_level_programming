#include "dog.h"
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
/**
 * new_dog - creates a new dog*
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: pointer or NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(strlen(name) * sizeof(char)
	+ sizeof(age) * sizeof(float) + strlen(owner)
	* sizeof(char));
	if (d == NULL)
	{
		free(name);
		free(owner);
		free(d);
		return (NULL);
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
	return (d);
}
