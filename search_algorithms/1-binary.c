#include "search_algos.h"
/**
 * binary_search - searches for a value in a sorted array
 * of integers using the Binary search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: index or -1 (on failure)
 */
int binary_search(int *array, size_t size, int value)
{
	size_t M, i;
	size_t L = 0;
	size_t R = size - 1;


	if (!array)
		return (-1);

	while (L <= R)
	{
		M = (L + R) / 2;
		printf("Searching in array: ");

		for (i = L; i <= R; i++)
		{
			printf("%d", array[i]);
			if (i < R)
				printf(", ");
		}
		printf("\n");

		if (array[M] == value)
			return (M);
		else if (array[M] < value)
			L = M + 1;
		else
			R = M - 1;
	}

	return (-1);
}
