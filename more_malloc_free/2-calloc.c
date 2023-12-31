#include "main.h"
#include <string.h>
/**
 * _calloc -  allocates memory for an array, using malloc
 * @nmemb: number of elements
 * @size: size of elements
 * Return: pointer or NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	memset(p, 0, size * nmemb);
	return (p);
}
