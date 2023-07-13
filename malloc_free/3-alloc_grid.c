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
	int j, i = 0;

	if (width <= 0)
		return (NULL);
	if (height <= 0)
		return (NULL);
	a = (int **) malloc(width * sizeof(int *));
	if (a == NULL)
	{
		free(a);
		return (NULL);
	}
	while (i < width)
	{
		a[i] = malloc(height * sizeof(int));
		j = 0;
		while (j < height)
		{
			a[i][j] = 0;
			j++;
		}
		i++;
	}

	return (a);
}
