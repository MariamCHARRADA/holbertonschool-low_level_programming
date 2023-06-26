#include "main.h"
/**
 * swap_int - swap values
 * @a: parameter
 * @b: parameter
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	int d = *b;

	*a = d;
	*b = c;
}
