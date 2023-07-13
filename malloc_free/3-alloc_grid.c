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
		return (NULL);
	while (i < height)
	{
		a[i] = malloc(height * sizeof(int));
		j = 0;
		while (j < width)
		{
		a[i][j] = 0;
		j++;
		}
		i++;
	}

	return (a);
}
