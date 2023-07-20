#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - prints strings, followed by a new line
 * @separator: string printed between strings
 * @n: number of strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;
	char *ptr;

	if (separator == NULL)
		separator = "";
	va_start(arg, n);
	ptr = va_arg(arg, char *);
	for (i = 0; i < n - 1; i++)
	{
		if (ptr == NULL)
			printf("%s%s", "(nil)", separator);
		printf("%s%s", ptr, separator);
	}
	if (ptr == NULL)
		printf("%s\n", ptr);
	va_end(arg);
}
