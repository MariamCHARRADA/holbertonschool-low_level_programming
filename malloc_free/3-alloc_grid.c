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
	int i = 0;

	while (i <= height)
	{
		a = malloc(width * sizeof(int));
		i++;
	}
	if (a == NULL)
		return (NULL);
	return (a);
}
