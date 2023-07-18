#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dog - prints a struct dog
 * @d: member
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			printf("Name: %s\n", d->name);
		printf("nil\n");
		if (d->age)
			printf("Age: %f\n", d->age);
		printf("nil\n");
		if (d->owner != NULL)
			printf("Owner: %s\n", d->owner);
		printf("nil\n");
	}
}
