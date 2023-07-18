#include "function_pointers.h"
/**
 * print_name - prints name
 * @name: my name
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
