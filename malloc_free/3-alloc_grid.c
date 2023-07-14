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
	a = (int **) malloc(height * sizeof(int *));
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		a[i] = malloc(width * sizeof(int));
		if (a[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(a[j]);
			}
			free(a);
		}
	}
	for (; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			a[i][j] = 0;
		}
	}
	return (a);
}
