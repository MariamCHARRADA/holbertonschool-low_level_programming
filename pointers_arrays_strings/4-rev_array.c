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
	int m = n - 1;

	while (i <= m / 2)
	{
		tmp = a[i];
		a[i] = a[m];
		a[m] = tmp;
		i++;
		m--;
	}
}
