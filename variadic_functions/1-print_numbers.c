#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: string printed between numbers
 * @n: number of integers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg;

if (separator != NULL)
{
	va_start(arg, n);
	for (i = 0; i < n - 1; i++)
		printf("%d%s", va_arg(arg, int), separator);
	printf("%d\n", va_arg(arg, int));
}
}
