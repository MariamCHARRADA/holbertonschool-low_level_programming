#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: array
 * @size: number of array elements
 * Return: 0 or -1
 * @cmp: pointer to the compare function
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	while (i < size)
	{
		cmp(array[i]);
		if (cmp)
			return (array[i]);
		i++;
	}
	return (0);
}