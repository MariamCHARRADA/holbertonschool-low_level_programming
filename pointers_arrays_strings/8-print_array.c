#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array
 * @a: parameter
 * @n: parameter
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d, ", a[i]);
		i++;
	}
	printf("\n");
}
