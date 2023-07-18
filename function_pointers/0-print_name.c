#include "function_pointers.h"
/**
 * print_name - prints name
 * @name: my name
 * @f: funcion pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
