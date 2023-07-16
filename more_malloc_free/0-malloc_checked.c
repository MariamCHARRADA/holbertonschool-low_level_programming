#include "main.h"
/**
 * malloc_checked - allocates memory using malloc
 * @b: unsigned int
 * Return: pointer or NULL
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
