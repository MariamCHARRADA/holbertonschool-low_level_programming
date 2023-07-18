#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a parameter on an array
 * @size: array size
 * @array: array of int
 * @action: function pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array != NULL && action != NULL)
	{
		while (i < size)
		{
		action(array[i]);
		i++;
		}
	}
}
