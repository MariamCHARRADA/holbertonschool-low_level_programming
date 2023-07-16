#include "main.h"
/**
 * array_range - creates an array of integers
 * @min: minimum integer
 * @max: maximum integer
 * Return: pointer or NULL
 */
int *array_range(int min, int max)
{
	int *a;
	int i, j;

	if (min > max)
		return (NULL);
	a = malloc((max - min) * sizeof(int));
	if (a == NULL)
		return (NULL);
	i = 0;
	j = min;
	while (i < max - min && j <= max)
	{
		a[i] = j;
		i++;
		j++;
	}
	return (a);
}
