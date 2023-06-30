#include "main.h"
/**
 * reverse_array -  reverses the content of an array of integers
 * @a: array
 * @n: num of elements
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int tmp;

	while (i < n)
	{
		tmp = a[i];
		a[i] = a[n];
		a[n] = tmp;
		i++;
		n--;
	}
}
