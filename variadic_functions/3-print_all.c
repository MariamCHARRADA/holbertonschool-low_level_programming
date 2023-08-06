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
	char *sep, *str;

	sep = "";
	va_start(arg, format);
	if (format != NULL)
	{
	if (format[i] != '\0')
	{
		while (format[i] != '\0')
		{
			switch (format[i])
			{
			case 'c':
				printf("%s%c", sep, va_arg(arg, int));
				break;
			case 'i':
				printf("%s%d", sep, va_arg(arg, int));
				break;
			case 'f':
				printf("%s%f", sep, va_arg(arg, double));
				break;
			case 's':
				str = va_arg(arg, char*);
				if (str == NULL)
					str = "(nil)";
				printf("%s%s", sep, str);
				break;
			default:
				i++;
				continue;
			}
			i++;
			sep = ", ";
		}
	}
	}
	printf("\n");
	va_end(arg);
}
