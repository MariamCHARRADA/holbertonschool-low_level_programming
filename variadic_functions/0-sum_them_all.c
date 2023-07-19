#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all -  returns the sum of all its parameters
 * @n: parameter count
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum;
	va_list arg;

	if (n == 0)
		return (0);
	va_start(arg, n);
	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(arg, int);
	va_end(arg);
	return (sum);
}
