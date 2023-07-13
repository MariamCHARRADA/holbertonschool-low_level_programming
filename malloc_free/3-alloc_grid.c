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
	int j, i;

	if (width <= 0)
		return (NULL);
	if (height <= 0)
		return (NULL);
	a = (int **) malloc(width * sizeof(int *));
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < width; i++)
	{
		a[i] = malloc(height * sizeof(int));
		for (j = 0; j < height; j++)
		{
			a[i][j] = 0;
		}
	}

	return (a);
}
