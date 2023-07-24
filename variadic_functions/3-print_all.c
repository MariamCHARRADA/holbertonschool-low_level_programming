#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - prints anything
 * @format: list of types of arguments
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	va_list arg;

	if (format[i])
	{
		while (format[i] != '\0')
		{
			switch (format[i]) {
			case 'c':
				printf("%c,", va_arg(arg, int));
				break;
			case 'i':
				printf("%d,", va_arg(arg, int));
				break;
			case 'f':
				printf("%f,", va_arg(arg, double));
				break;
			case 's':
				printf("%s,", va_arg(arg, char*));
				break;
			}
			i++;
		}
	}
	printf("\n");
}
