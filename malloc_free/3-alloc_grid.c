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

	while (i < width)
	{
		j = 0;
		while (j < width)
		{
			a = malloc(height * sizeof(int));
			j++;
		}
		i++;
	}
	if (a == NULL)
		return (NULL);
	return (a);
}
