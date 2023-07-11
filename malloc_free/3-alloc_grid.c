#include "main.h"
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: grid width
 * @height: grid length
 * Return: 0 or null
 */
int **alloc_grid(int width, int height)
{
	int **a;

	if (width <= 0 || height <= 0)
		return (NULL);
	a = malloc(width * height * sizeof(int));
	if (a == NULL)
		return (NULL);
	return (a);
}
