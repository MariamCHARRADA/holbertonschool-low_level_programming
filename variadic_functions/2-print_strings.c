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
	for (i = 0; i < n - 1; i++)
	{
		ptr = va_arg(arg, char *);
		if (ptr == NULL)
			printf("%s%s", "(nil)", separator);
		printf("%s%s", ptr, separator);
	}
	if (va_arg(arg, char *) == NULL)
		printf("%s\n", "(nil)");	
	printf("%s\n", va_arg(arg, char *));
	va_end(arg);
}
