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
	if (n > 0)
	{
	for (i = 0; i < n - 1; i++)
	{
		ptr = va_arg(arg, char *);
		if (ptr == NULL)
			printf("%s%s", "(nil)", separator);
		else
			printf("%s%s", ptr, separator);
	}

	ptr = va_arg(arg, char *);
	if (ptr == NULL)
		printf("%s\n", "(nil)");
	else
		printf("%s\n", ptr);
	}
	else
	{
		printf("\n");
	}
	va_end(arg);
}
